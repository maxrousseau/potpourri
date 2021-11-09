(ql:quickload '("dexador"))
;; i'll probably need a json parser, unless I can simply regexp search
;; what i need from the request which would be even simple
;; argument parsing should be quite simple I'll look into it a little later


;; those variables I used to assemble the request
;;	var esearch string = "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esearch.fcgi?"
;;	var efetch string = "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/efetch.fcgi?"
;;	var esummary string = "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esummary.fcgi?"
;;
;;	var db string = "db=pubmed&"
;;
;;	var term string = fmt.Sprintf("term=%s&", input_term) //TODO: parse as cli arg
;;	var retmax string = "retmax=10&"
;;	var json string = "retmode=json" //close with
;;	var text string = "retmode=text&"
;;	var abstract string = "rettype=abstract&

;;; 1. build the link :: Ok
;;; 2. make the request :: Ok
;;; 3. parse the json ;; not yet, just doing string search is enough for now

;; seprate by &
;;(rtype "rettype=abstrac") ;; only when I want to get the abstracts
;; @TODO input variable mode (search, fetch summary), use case statement to
;;switch between each mode
(defun query ()
  (let ((esearch "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esearch.fcgi?")
		(term "term=orthodontics")
		(db "db=pubmed")
		(rmode "retmode=json")
		(rmax "retmax=10"))
	(format nil "~a~a&~a&~a&~a" esearch term db rmode rmax)))


;; define the url variable, why the *__*?
;; > it is used for dynamic variables
;; calls the guest request and stores in the request variable, which
;; use defparameter if you want to change the value otherwise use defvar (constants)
(defparameter *request* (dex:get (query)))


;;@TODO turn this into the actual idlist string > id=0001,0002,0003
(defun format-idlist (raw)
  "reformat string to list which can be used in API resquest"
  ;; do something here...
  (remove #\" raw))

(defun get-idlist (sresult)
  (let ((a (+ 9 (search "idlist" sresult)))
		(b (- (search "translationset" sresult) 3)))
	;; do something to clean up the string
	(format-idlist (subseq sresult a b))))
