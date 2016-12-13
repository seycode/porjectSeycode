[Uno.Compiler.UxGenerated]
public partial class TView: Fuse.Controls.TextView
{
    static TView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Rectangle();
        var temp1 = new Fuse.Drawing.Stroke();
        var temp2 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.TextColor = float4(0f, 0f, 0f, 1f);
        this.PlaceholderColor = float4(0.7411765f, 0.7647059f, 0.7803922f, 1f);
        temp.CornerRadius = float4(7f, 7f, 7f, 7f);
        temp.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Layer = Fuse.Layer.Background;
        temp.Strokes.Add(temp1);
        temp1.Width = 1f;
        temp1.Brush = temp2;
        this.Font = MainView.LightItalic;
        this.Children.Add(temp);
    }
}
