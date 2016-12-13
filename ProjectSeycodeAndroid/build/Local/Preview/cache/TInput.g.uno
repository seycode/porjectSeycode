[Uno.Compiler.UxGenerated]
public partial class TInput: Fuse.Controls.TextInput
{
    static TInput()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TInput()
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
        this.Padding = float4(0f, 0f, 0f, 3f);
        temp.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Bottom;
        temp.Layer = Fuse.Layer.Background;
        temp.Strokes.Add(temp1);
        temp1.Width = 1f;
        temp1.Alignment = Fuse.Drawing.StrokeAlignment.Center;
        temp1.Brush = temp2;
        this.Font = MainView.LightItalic;
        this.Children.Add(temp);
    }
}
