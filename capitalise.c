char stu_capitalise(char letter)
{
    if ((letter >= 'a') && (letter<='z'))
        {
            letter = letter -32;
            return(letter);
        }
    else{
        return(letter);
    }
}
