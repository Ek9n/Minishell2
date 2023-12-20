



Executor
{
    while (words)
    {
        if (is_redirection)
        {
            do(redirection function on all following words)
        }
        if (is_pipe)
        {
            do(pipes)
            in pipes
            {
                -cnt pipes
                -initialize pipes
                -do the forking for each child
                -if its the last word in the pipeproces:
                    -if (is_redirection)
            }
        }
    }
}
