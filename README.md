# RemoveComments

This program removes all comments from the input file. for example:

Input:
```c#
// Hello World! program
namespace HelloWorld
{
    /* Main class Hello */
    class Hello
    {
        // Entry point
        static void Main(string[] args)
        {
            /* Print "Hello world!" to console */
            System.Console.WriteLine("Hello World!");
            // End of Program
        }
    }
    /* End of class */
}
/* End of namespace */
```

Output:

```c#



namespace HelloWorld
{
    
    class Hello
    {
        
        static void Main(string[] args)
        {
            
            System.Console.WriteLine("Hello World!");
            
        }
    }
    
}

```
