import * as React from "react";

interface urlSrc {
	src: string
}

const LTile = (props: urlSrc) => (
	<div className="lighttile">
		{props.src ? <img src={props.src} width={50} height={50}/> : ''}
	</div>
);

const DTile = (props: urlSrc) => (
	<div className="darktile">
		{props.src ? <img src={props.src} width={50} height={50}/> : ''}
	</div>
);

const Board = () => (
	<div id="board">
	<div className="row"><LTile src={"./piecesvg/rook.svg"}/><DTile src={"./piecesvg/knight.svg"}/><LTile src={"./piecesvg/bishop.svg"}/><DTile src={"./piecesvg/queen.svg"}/><LTile src={"./piecesvg/king.svg"}/><DTile src={"./piecesvg/bishop.svg"}/><LTile src={"./piecesvg/knight.svg"}/><DTile src={"./piecesvg/rook.svg"}/></div>
	<div className="row"><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/></div>
	<div className="row"><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/></div>
	<div className="row"><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/></div>
	<div className="row"><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/></div>
	<div className="row"><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/><DTile src={null}/><LTile src={null}/></div>
	<div className="row"><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/><LTile src={"./piecesvg/pawn.svg"}/><DTile src={"./piecesvg/pawn.svg"}/></div>
	<div className="row"><DTile src={"./piecesvg/rook.svg"}/><LTile src={"./piecesvg/knight.svg"}/><DTile src={"./piecesvg/bishop.svg"}/><LTile src={"./piecesvg/queen.svg"}/><DTile src={"./piecesvg/king.svg"}/><LTile src={"./piecesvg/bishop.svg"}/><DTile src={"./piecesvg/knight.svg"}/><LTile src={"./piecesvg/rook.svg"}/></div>
	</div>
);

const ChessAgentBoard = () => (
	<div id="chessagentboard">
		<Board/>
	</div>
);

export const App = () => (
  <ChessAgentBoard/>
);
