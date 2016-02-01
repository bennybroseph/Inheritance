


namespace ConsoleApplication1
{
    public class Semi : Car
    {
        private SemiTrailer Trailer;

        public override void Move(Vector3<float> NewPosition)
        {
            base.Move(NewPosition);

            Trailer.SetPosition(Position);
        }

        public Semi() : base()
        {

        }
        ~Semi()
        {

        }
    }
}
