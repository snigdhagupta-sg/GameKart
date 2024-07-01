const computerChoice = () => {
  let choices = ["rock", "paper", "scissors"];
  let i = Math.floor(Math.random() * 3); //Math.random() gives number b/w 0 to 1
  return choices[i];
};
const game = (userChoice) => {
  let compChoice = computerChoice();
  console.log("User Choice: ", userChoice);
  console.log("Computer Choice: ", compChoice);
  let result = document.querySelector(".result");
  let userPointsElement = document.querySelector(".pointsYou");
  let computerPointsElement = document.querySelector(".pointsComputer");
  let userPoints = parseInt(userPointsElement.innerText);
  let computerPoints = parseInt(computerPointsElement.innerText);
  if (userChoice === compChoice) {
    result.innerText = `DRAW`;
    console.log("DRAW");
    document.querySelector(".result").style.backgroundColor = "blue";
  } else if (
    (userChoice === "rock" && compChoice === "scissors") ||
    (userChoice === "scissors" && compChoice === "paper") ||
    (userChoice === "paper" && compChoice === "rock")
  ) {
    result.innerText = `${userChoice.toUpperCase()} BEATS ${compChoice.toUpperCase()} \n YOU WON `;
    console.log("USER WON");
    userPoints++;
    userPointsElement.innerText = `${userPoints}`;
    document.querySelector(".result").style.backgroundColor = "green";
  } else {
    result.innerText = `${compChoice.toUpperCase()} BEATS ${userChoice.toUpperCase()} \n YOU LOST`;
    console.log("COMPUTER WON");
    computerPoints++;
    computerPointsElement.innerText = `${computerPoints}`;
    document.querySelector(".result").style.backgroundColor = "red";
  }
};
let options = document.querySelectorAll(".option"); //we got an HTML Collection
let userChoice = options.forEach((option) => {
  option.addEventListener("click", () => {
    userChoice = option.getAttribute("id");
    game(userChoice);
  });
});
