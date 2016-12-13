[Uno.Compiler.UxGenerated]
public partial class Header: Fuse.Controls.Rectangle
{
    static Header()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Header()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        var temp1 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Height = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp.Value = "SeyCode";
        temp.FontSize = 22f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Font = MainView.Bold;
        this.Background = temp1;
        this.Children.Add(temp);
    }
}
