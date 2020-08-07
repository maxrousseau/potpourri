// Exercises from the page: https://doc.rust-lang.org/book/title-page.html
// Guessing game
use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {

    let rnd_number = rand::thread_rng().gen_range(1, 101);

    loop {

        let mut guess = String::new();
        println!("Input a number");
        io::stdin().read_line(&mut guess)
            .expect("Failed to read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("Your guess: {}", guess);

        match guess.cmp(&rnd_number) {

            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
    }
}
