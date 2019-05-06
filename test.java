package fail;
import static org.junit.Assert.*;
import org.junit.Before;
import org.junit.Test;
public class ViewTest {
    @Test
    public void testOut() {
        int[] a = {1,1,1,1};
        assertEquals(1, new output().out(10, 10,a,1, 1, 1));
    }
    private void assertArrayEquals(int i, int out) {
        
    }
    @Test
    public void testOut1() {
        int[] a = {1,1,1,0};
        assertEquals(1, new output().out(50, 10,a,1, 1, 1));
    }
    @Test
    public void testOut2() {
        int[] a = {1,0,1,0};
        assertEquals(1, new output().out(10, 10,a,1, 1, 1));
    }
    @Test
    public void testOut3() {
        int[] a = {0,1,1,0};
        assertEquals(1, new output().out(10, 10,a,1, 1, 1));
    }
}