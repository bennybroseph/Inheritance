


namespace ConsoleApplication1
{
    public class Vector2<T>
    {
        protected T x, y;

        public Vector2()
        {

        }
        public Vector2(T x, T y)
        {
            this.x = x;
            this.y = y;
        }
    }

    public class Vector3<T> : Vector2<T>
    {
        protected T z;

        public Vector3() : base()
        {

        }
        public Vector3(T x, T y, T z) : base(x, y)
        {
            this.z = z;
        }
    }

    public class Vector4<T> : Vector3<T>
    {
        protected T t;

        public Vector4() : base()
        {

        }
        public Vector4(T x, T y, T z, T t) : base(x, y, z)
        {
            this.t = t;
        }
    }
}
