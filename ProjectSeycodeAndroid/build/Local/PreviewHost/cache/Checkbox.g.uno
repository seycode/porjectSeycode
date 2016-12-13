[Uno.Compiler.UxGenerated]
public partial class Checkbox: Fuse.Controls.ToggleControl
{
    global::Uno.UX.Property<string> checkbox_Value_inst;
    internal Fuse.Controls.Text checkbox;
    static Checkbox()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Checkbox()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        checkbox = new Fuse.Controls.Text();
        checkbox_Value_inst = new SeyCode_FuseControlsText_Value_Property(checkbox, __selector0);
        var temp = new Fuse.Gestures.Clicked();
        var temp1 = new Fuse.Controls.Toggle();
        var temp2 = new Fuse.Controls.Rectangle();
        var temp3 = new Fuse.Drawing.Stroke();
        var temp4 = new Fuse.Triggers.WhileTrue();
        var temp5 = new Fuse.Animations.Change<string>(checkbox_Value_inst);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp.Actions.Add(temp1);
        temp1.Target = this;
        temp2.CornerRadius = float4(3f, 3f, 3f, 3f);
        temp2.Width = new Uno.UX.Size(23f, Uno.UX.Unit.Unspecified);
        temp2.Height = new Uno.UX.Size(23f, Uno.UX.Unit.Unspecified);
        temp2.Strokes.Add(temp3);
        temp2.Children.Add(checkbox);
        temp2.Children.Add(temp4);
        temp3.Color = float4(0.7411765f, 0.7647059f, 0.7803922f, 1f);
        temp3.Width = 2f;
        checkbox.FontSize = 20f;
        checkbox.Color = float4(0.1529412f, 0.682353f, 0.3764706f, 1f);
        checkbox.X = new Uno.UX.Size(1.5f, Uno.UX.Unit.Unspecified);
        checkbox.Y = new Uno.UX.Size(1.5f, Uno.UX.Unit.Unspecified);
        checkbox.Name = __selector1;
        checkbox.Font = MainView.fa;
        temp4.Source = this;
        temp4.Animators.Add(temp5);
        temp5.Value = "\uF00C";
        this.Children.Add(temp);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "checkbox";
}
