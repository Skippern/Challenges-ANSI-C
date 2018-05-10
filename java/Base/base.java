class Base
{
    Base()
    {
        System.out.print("Base");
    }
}
public class Alpha extends Base
{
    public static void main(String[] args)
    {
        new Alpha(); /* Line 12 */
        new Base(); /* Line 13 */
    }
}