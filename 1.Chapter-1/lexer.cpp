// The lexer function returns tokens [0-255] if it is an unknown character, otherwise one of these know things.
enum Token {
	tok_eof = -1,
	

        // commands
	tok_def = -2,
	tok_extern = -3,

        // primary 
	tok_indentifier = -4,
	tok_number = -5,
}

static std::string IdentifierStr; // Filled in if tok_identifier
static double NumVal;             // Filled in if tok_number


//gettok - Return the next token from standard input.
static int gettok() {
	static int LastChar = ' ';

	//Skip any whitespace
	while (isspace(LastChar))
		LastChar = getchar();
}



if (isalpha(LastChar)) { // identifier: [a-zA-Z][a-zA-Z0-9]
	Identifier = LastChar
	
	while (isalnum((LastChar = getchar())))
		Identifier += LastChar;

	if (IdentifierStr == "def")
		return tok_def;
	if (IdentifierStr == "extern")
		return tok_extern;
	return tok_identifier;
}
