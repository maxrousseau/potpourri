#lang sicp
;; @NOTE - working with geiser
;;  C-c C-a to start the REPL
;;  load the buffer from the REPL with: ,enter "path/file.rkt"
;;  https://stackoverflow.com/questions/21008623/setting-language-with-lang-in-the-repl

(define pi 3.14159)

;; scope of x here is local
(define (square x)
  (* x x))

(define (area_circle r)
  (* pi (square r)))

()
