[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<Fuse.Elements.Element> tabbar_LayoutElement_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<string> temp7_Value_inst;
    global::Uno.UX.Property<string> temp8_Value_inst;
    global::Uno.UX.Property<string> temp9_Value_inst;
    global::Uno.UX.Property<string> temp10_Value_inst;
    global::Uno.UX.Property<Fuse.Visual> navigation_Active_inst;
    [global::Uno.UX.UXGlobalResource("fa")] public static readonly Fuse.Font fa;
    [global::Uno.UX.UXGlobalResource("Ubuntu")] public static readonly Fuse.Font Ubuntu;
    [global::Uno.UX.UXGlobalResource("Bold")] public static readonly Fuse.Font Bold;
    [global::Uno.UX.UXGlobalResource("Light")] public static readonly Fuse.Font Light;
    [global::Uno.UX.UXGlobalResource("LightItalic")] public static readonly Fuse.Font LightItalic;
    internal Fuse.Controls.PageControl navigation;
    internal Fuse.Controls.Page encrypt;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Controls.Page decrypt;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Controls.MultiLayoutPanel tabbar;
    internal Fuse.Controls.Panel encryptTab;
    internal Fuse.Controls.Rectangle indicator;
    internal Fuse.Controls.Panel decryptTab;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "navigation",
        "encrypt",
        "decrypt",
        "tabbar",
        "encryptTab",
        "indicator",
        "decryptTab"
    };
    static MainView()
    {
        fa = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../fonts/fontawesome-webfont.ttf")));
        Ubuntu = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../fonts/Ubuntu-Medium.ttf")));
        Bold = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../fonts/Ubuntu-Bold.ttf")));
        Light = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../fonts/Ubuntu-Light.ttf")));
        LightItalic = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../fonts/Ubuntu-Lightitalic.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(fa, "fa");
        global::Uno.UX.Resource.SetGlobalKey(Ubuntu, "Ubuntu");
        global::Uno.UX.Resource.SetGlobalKey(Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(LightItalic, "LightItalic");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp11 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp12 = new Fuse.Reactive.FuseJS.Http();
        var temp13 = new Fuse.Storage.StorageModule();
        var temp14 = new Polyfills.Window.WindowModule();
        var temp15 = new FuseJS.Globals();
        var temp16 = new FuseJS.Lifecycle();
        var temp17 = new FuseJS.Environment();
        var temp18 = new FuseJS.Base64();
        var temp19 = new FuseJS.Bundle();
        var temp20 = new FuseJS.FileReaderImpl();
        var temp21 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        tabbar = new Fuse.Controls.MultiLayoutPanel();
        tabbar_LayoutElement_inst = new SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property(tabbar, __selector0);
        var temp = new TInput();
        temp_Value_inst = new SeyCode_TInput_Value_Property(temp, __selector1);
        var temp1 = new TInput();
        temp1_Value_inst = new SeyCode_TInput_Value_Property(temp1, __selector1);
        var temp2 = new Checkbox();
        temp2_Value_inst = new SeyCode_Checkbox_Value_Property(temp2, __selector1);
        var temp3 = new Fuse.Controls.Text();
        temp3_Value_inst = new SeyCode_FuseControlsText_Value_Property(temp3, __selector1);
        var temp4 = new TView();
        temp4_Value_inst = new SeyCode_TView_Value_Property(temp4, __selector1);
        var temp5 = new TView();
        temp5_Value_inst = new SeyCode_TView_Value_Property(temp5, __selector1);
        var temp6 = new TInput();
        temp6_Value_inst = new SeyCode_TInput_Value_Property(temp6, __selector1);
        var temp7 = new TInput();
        temp7_Value_inst = new SeyCode_TInput_Value_Property(temp7, __selector1);
        var temp8 = new Fuse.Controls.Text();
        temp8_Value_inst = new SeyCode_FuseControlsText_Value_Property(temp8, __selector1);
        var temp9 = new TView();
        temp9_Value_inst = new SeyCode_TView_Value_Property(temp9, __selector1);
        var temp10 = new TView();
        temp10_Value_inst = new SeyCode_TView_Value_Property(temp10, __selector1);
        navigation = new Fuse.Controls.PageControl();
        navigation_Active_inst = new SeyCode_FuseControlsPageControl_Active_Property(navigation, __selector2);
        var temp22 = new Fuse.Controls.Panel();
        var temp23 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp24 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp25 = new Fuse.Controls.DockPanel();
        var temp26 = new Fuse.Controls.StatusBarBackground();
        var temp27 = new Fuse.Controls.BottomBarBackground();
        var temp28 = new Fuse.iOS.StatusBarConfig();
        var temp29 = new Header();
        encrypt = new Fuse.Controls.Page();
        var temp30 = new Fuse.Navigation.WhileActive();
        var temp31 = new Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(tabbar_LayoutElement_inst);
        var temp32 = new Fuse.Controls.ScrollView();
        var temp33 = new Fuse.Controls.StackPanel();
        var temp34 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "key1Encode");
        var temp35 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "key2Encode");
        var temp36 = new Fuse.Controls.Panel();
        var temp37 = new Fuse.Reactive.DataBinding<bool>(temp2_Value_inst, "checkboxChecked");
        var temp38 = new Fuse.Controls.Text();
        var temp39 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "encodeError");
        var temp40 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "plainTextEncode");
        var temp41 = new Btn();
        temp_eb0 = new Fuse.Reactive.EventBinding("encode");
        var temp42 = new Fuse.Reactive.DataBinding<string>(temp5_Value_inst, "encodedText");
        decrypt = new Fuse.Controls.Page();
        var temp43 = new Fuse.Navigation.WhileActive();
        var temp44 = new Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(tabbar_LayoutElement_inst);
        var temp45 = new Fuse.Controls.ScrollView();
        var temp46 = new Fuse.Controls.StackPanel();
        var temp47 = new Fuse.Reactive.DataBinding<string>(temp6_Value_inst, "key1Decode");
        var temp48 = new Fuse.Reactive.DataBinding<string>(temp7_Value_inst, "key2Decode");
        var temp49 = new Fuse.Reactive.DataBinding<string>(temp8_Value_inst, "decodeError");
        var temp50 = new Fuse.Reactive.DataBinding<string>(temp9_Value_inst, "plainTextDecode");
        var temp51 = new Btn();
        temp_eb1 = new Fuse.Reactive.EventBinding("decode");
        var temp52 = new Fuse.Reactive.DataBinding<string>(temp10_Value_inst, "decodedText");
        var temp53 = new Fuse.Controls.Rectangle();
        var temp54 = new Fuse.Layouts.GridLayout();
        encryptTab = new Fuse.Controls.Panel();
        var temp55 = new Fuse.Controls.Placeholder();
        indicator = new Fuse.Controls.Rectangle();
        var temp56 = new Fuse.Triggers.LayoutAnimation();
        var temp57 = new Fuse.Animations.Move();
        var temp58 = new Fuse.Drawing.StaticSolidColor(float4(0.1529412f, 0.682353f, 0.3764706f, 1f));
        var temp59 = new Tab();
        var temp60 = new Fuse.Gestures.Clicked();
        var temp61 = new Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        decryptTab = new Fuse.Controls.Panel();
        var temp62 = new Fuse.Controls.Placeholder();
        var temp63 = new Tab();
        var temp64 = new Fuse.Gestures.Clicked();
        var temp65 = new Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        var temp66 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp23.LineNumber = 20;
        temp23.FileName = "MainView.ux";
        temp23.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../scripts/md5.js"));
        temp24.LineNumber = 21;
        temp24.FileName = "MainView.ux";
        temp24.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../scripts/main.js"));
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp27);
        temp25.Children.Add(temp28);
        temp25.Children.Add(temp29);
        temp25.Children.Add(navigation);
        temp25.Children.Add(temp53);
        global::Fuse.Controls.DockPanel.SetDock(temp26, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp27, Fuse.Layouts.Dock.Bottom);
        temp28.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        global::Fuse.Controls.DockPanel.SetDock(temp29, Fuse.Layouts.Dock.Top);
        navigation.Name = __selector3;
        navigation.Children.Add(encrypt);
        navigation.Children.Add(decrypt);
        encrypt.Name = __selector4;
        encrypt.Children.Add(temp30);
        encrypt.Children.Add(temp32);
        temp30.Actions.Add(temp31);
        temp31.Value = encryptTab;
        temp32.Padding = float4(15f, 25f, 15f, 0f);
        temp32.Children.Add(temp33);
        temp33.Children.Add(temp);
        temp33.Children.Add(temp1);
        temp33.Children.Add(temp36);
        temp33.Children.Add(temp4);
        temp33.Children.Add(temp41);
        temp33.Children.Add(temp5);
        temp.PlaceholderText = "Key 1 (will be plain)";
        temp.Bindings.Add(temp34);
        temp1.PlaceholderText = "Key 2 (will be hashed)";
        temp1.Margin = float4(0f, 20f, 0f, 0f);
        temp1.Bindings.Add(temp35);
        temp36.Margin = float4(0f, 15f, 0f, 0f);
        temp36.Children.Add(temp2);
        temp36.Children.Add(temp38);
        temp36.Children.Add(temp3);
        temp2.Alignment = Fuse.Elements.Alignment.Left;
        temp2.Bindings.Add(temp37);
        temp38.Value = "Hash Key 2";
        temp38.Margin = float4(30f, 2f, 0f, 0f);
        temp38.Font = global::MainView.Light;
        temp3.Color = float4(0.7529412f, 0.2235294f, 0.1686275f, 1f);
        temp3.Alignment = Fuse.Elements.Alignment.Right;
        temp3.Margin = float4(0f, 2f, 0f, 0f);
        temp3.Font = global::MainView.Light;
        temp3.Bindings.Add(temp39);
        temp4.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp4.PlaceholderText = "Your Text";
        temp4.MinHeight = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        temp4.Margin = float4(0f, 12f, 0f, 0f);
        temp4.Padding = float4(4f, 4f, 4f, 4f);
        temp4.Bindings.Add(temp40);
        temp41.Margin = float4(0f, 15f, 0f, 0f);
        temp41.Text = "Encrypt";
        global::Fuse.Gestures.Clicked.AddHandler(temp41, temp_eb0.OnEvent);
        temp41.Bindings.Add(temp_eb0);
        temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp5.PlaceholderText = "Encrypted Text";
        temp5.MinHeight = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        temp5.Margin = float4(0f, 15f, 0f, 0f);
        temp5.Padding = float4(4f, 4f, 4f, 4f);
        temp5.Bindings.Add(temp42);
        decrypt.Name = __selector5;
        decrypt.Children.Add(temp43);
        decrypt.Children.Add(temp45);
        temp43.Actions.Add(temp44);
        temp44.Value = decryptTab;
        temp45.Padding = float4(15f, 25f, 15f, 0f);
        temp45.Children.Add(temp46);
        temp46.Children.Add(temp6);
        temp46.Children.Add(temp7);
        temp46.Children.Add(temp8);
        temp46.Children.Add(temp9);
        temp46.Children.Add(temp51);
        temp46.Children.Add(temp10);
        temp6.PlaceholderText = "Key 1 (will be plain)";
        temp6.Bindings.Add(temp47);
        temp7.PlaceholderText = "Key 2 (will be hashed)";
        temp7.Margin = float4(0f, 20f, 0f, 0f);
        temp7.Bindings.Add(temp48);
        temp8.Color = float4(0.7529412f, 0.2235294f, 0.1686275f, 1f);
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.Margin = float4(0f, 15f, 0f, 0f);
        temp8.Font = global::MainView.Light;
        temp8.Bindings.Add(temp49);
        temp9.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp9.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp9.PlaceholderText = "Encrypted Text";
        temp9.MinHeight = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        temp9.Margin = float4(0f, 12f, 0f, 0f);
        temp9.Padding = float4(4f, 4f, 4f, 4f);
        temp9.Bindings.Add(temp50);
        temp51.Margin = float4(0f, 15f, 0f, 0f);
        temp51.Text = "Decrypt";
        global::Fuse.Gestures.Clicked.AddHandler(temp51, temp_eb1.OnEvent);
        temp51.Bindings.Add(temp_eb1);
        temp10.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp10.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp10.PlaceholderText = "Plain Text";
        temp10.MinHeight = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        temp10.Margin = float4(0f, 15f, 0f, 0f);
        temp10.Padding = float4(4f, 4f, 4f, 4f);
        temp10.Bindings.Add(temp52);
        temp53.Height = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp53, Fuse.Layouts.Dock.Bottom);
        temp53.Background = temp66;
        temp53.Children.Add(tabbar);
        tabbar.Name = __selector6;
        tabbar.Layout = temp54;
        tabbar.Children.Add(encryptTab);
        tabbar.Children.Add(decryptTab);
        temp54.Rows = "1*";
        temp54.ColumnCount = 2;
        encryptTab.Name = __selector7;
        encryptTab.Children.Add(temp55);
        encryptTab.Children.Add(temp59);
        temp55.PlaceholderContent = indicator;
        indicator.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        indicator.Alignment = Fuse.Elements.Alignment.Top;
        indicator.Name = __selector8;
        indicator.Fill = temp58;
        indicator.Children.Add(temp56);
        temp56.Animators.Add(temp57);
        temp57.X = 1f;
        temp57.Easing = Fuse.Animations.Easing.BackIn;
        temp57.Duration = 0.3;
        temp57.RelativeTo = Fuse.Triggers.LayoutTransition.PositionLayoutChange;
        temp59.Icon = "\uF023";
        temp59.Text = "Encrypt";
        temp59.Children.Add(temp60);
        temp60.Actions.Add(temp61);
        temp61.Value = encrypt;
        decryptTab.Name = __selector9;
        decryptTab.Children.Add(temp62);
        decryptTab.Children.Add(temp63);
        temp62.Target = indicator;
        temp63.Icon = "\uF09C";
        temp63.Text = "Decrypt";
        temp63.Children.Add(temp64);
        temp64.Actions.Add(temp65);
        temp65.Value = decrypt;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(navigation);
        __g_nametable.Objects.Add(encrypt);
        __g_nametable.Objects.Add(decrypt);
        __g_nametable.Objects.Add(tabbar);
        __g_nametable.Objects.Add(encryptTab);
        __g_nametable.Objects.Add(indicator);
        __g_nametable.Objects.Add(decryptTab);
        this.Children.Add(temp22);
        this.Children.Add(temp23);
        this.Children.Add(temp24);
        this.Children.Add(temp25);
    }
    static global::Uno.UX.Selector __selector0 = "LayoutElement";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Active";
    static global::Uno.UX.Selector __selector3 = "navigation";
    static global::Uno.UX.Selector __selector4 = "encrypt";
    static global::Uno.UX.Selector __selector5 = "decrypt";
    static global::Uno.UX.Selector __selector6 = "tabbar";
    static global::Uno.UX.Selector __selector7 = "encryptTab";
    static global::Uno.UX.Selector __selector8 = "indicator";
    static global::Uno.UX.Selector __selector9 = "decryptTab";
}