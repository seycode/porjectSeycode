[Uno.Compiler.UxGenerated]
public partial class Btn: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    static Btn()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Btn()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new SeyCode_FuseControlsText_Value_Property(temp, __selector0);
        this_Text_inst = new SeyCode_Btn_Text_Property(this, __selector1);
        var temp1 = new Fuse.Controls.PropertyBinding<string>(temp_Value_inst, this_Text_inst);
        var temp2 = new Fuse.Controls.Rectangle();
        var temp3 = new Fuse.Drawing.Stroke();
        var temp4 = new Fuse.Drawing.StaticSolidColor(float4(0.1529412f, 0.682353f, 0.3764706f, 1f));
        this.Padding = float4(0f, 5f, 0f, 5f);
        this.Name = __selector2;
        temp.Color = float4(0.1529412f, 0.682353f, 0.3764706f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Font = MainView.LightItalic;
        temp.Bindings.Add(temp1);
        temp2.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp2.Layer = Fuse.Layer.Background;
        temp2.Strokes.Add(temp3);
        temp3.Width = 1f;
        temp3.Brush = temp4;
        this.Children.Add(temp);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
    static global::Uno.UX.Selector __selector2 = "btn";
}
