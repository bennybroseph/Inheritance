using System.Collections.Generic;


namespace ConsoleApplication1
{
    public class Car
    {
        protected int Wheels;

        protected Vector3<float> Position;
        protected Vector4<float> Color;

        protected Driver Driver;
        protected List<Passenger> Passengers;

        public virtual void Draw()
        {
            // Draw To Screen
        }               

        public virtual void Move(Vector3<float> NewPosition)
        {
            Position = NewPosition;
        }

        public Car()
        {
            Position = new Vector3<float>(0.0f, 0.0f, 0.0f);
        }
        ~Car()
        {

        }
    }
}
