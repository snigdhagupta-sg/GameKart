let openGame = (folderName, gameName) => {
  console.log(folderName);
  window.location.href = `.\\${folderName}\\${gameName}.html`;
};
//
let rockPaperScissors = document.querySelector("#Rock_Paper_Scissors");
rockPaperScissors.addEventListener("click", () => {
  openGame("Rock Paper Scissors", "rock_paper_scissors");
});
//
let ticTacToe = document.querySelector("#Tic_Tac_Toe");
ticTacToe.addEventListener("click", () => {
  openGame("Tic Tac Toe", "tic_tac_toe");
});
