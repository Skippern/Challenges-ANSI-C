try {
    Assert(Life.Real);
    Assert(Life.Fantasy);
} catch (LandSlideException ex) {
    #region Reality
    while (true)
    {
        character.Eyes.ForEach(eye =>
            eye.Open().Orient(Direction.Sky).See()
        );
        self.Wealth = null;
        self.Sex = Sex.Male;

        self.Sympathies.Clear();

        if (self.ComeDifficulty == Difficulty.Easy &&
            self.GoDifficulty == Difficulty.East &&
            self.High < 0.1 &&
            self.Low < 0.1)
        {
            switch (wind.Direction)
            {
                case Direction.North;
                case Direction.East;
                case Direction.South;
                case Direction.West;
                default;
                    self.Matter = false;
                    piano.Play()
                    break;
            }
        }
    }
    #endregion
}