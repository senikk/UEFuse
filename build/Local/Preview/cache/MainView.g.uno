[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        internal readonly MainView __parent;
        public Template(MainView parent): base(null, false)
        {
            __parent = parent;
        }
        global::Uno.UX.Property<float> self_Opacity_inst;
        global::Uno.UX.Property<float4> self_Color_inst;
        global::Uno.UX.Property<Uno.UX.Size> self_Height_inst;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Rectangle();
            self_Opacity_inst = new UniEconomy_FuseControlsRectangle_Opacity_Property(self, __selector0);
            self_Color_inst = new UniEconomy_FuseControlsRectangle_Color_Property(self, __selector1);
            self_Height_inst = new UniEconomy_FuseControlsRectangle_Height_Property(self, __selector2);
            var temp = new Fuse.Triggers.AddingAnimation();
            var temp1 = new Fuse.Animations.Change<float>(self_Opacity_inst);
            var temp2 = new Fuse.Reactive.DataBinding<float4>(self_Color_inst, "color");
            var temp3 = new Fuse.Reactive.DataBinding<Uno.UX.Size>(self_Height_inst, "height");
            self.CornerRadius = float4(5f, 5f, 5f, 5f);
            self.Margin = float4(5f, 5f, 5f, 5f);
            self.Name = __selector3;
            temp.Animators.Add(temp1);
            temp1.Value = 0f;
            temp1.Duration = 0.3;
            self.Children.Add(temp);
            self.Bindings.Add(temp2);
            self.Bindings.Add(temp3);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "Height";
        static global::Uno.UX.Selector __selector3 = "item";
    }
    global::Uno.UX.Property<float4> myRectangle_Color_inst;
    global::Uno.UX.Property<float4> myRectangle_CornerRadius_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float> myBlur_Radius_inst;
    internal Fuse.Controls.Rectangle myRectangle;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Effects.Blur myBlur;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "myRectangle",
        "myBlur"
    };
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp2 = new Fuse.Reactive.FuseJS.Http();
        var temp3 = new Fuse.Storage.StorageModule();
        var temp4 = new Polyfills.Window.WindowModule();
        var temp5 = new FuseJS.Globals();
        var temp6 = new FuseJS.Lifecycle();
        var temp7 = new FuseJS.Environment();
        var temp8 = new FuseJS.Base64();
        var temp9 = new FuseJS.Bundle();
        var temp10 = new FuseJS.FileReaderImpl();
        var temp11 = new FuseJS.UserEvents();
        myRectangle = new Fuse.Controls.Rectangle();
        myRectangle_Color_inst = new UniEconomy_FuseControlsRectangle_Color_Property(myRectangle, __selector0);
        myRectangle_CornerRadius_inst = new UniEconomy_FuseControlsRectangle_CornerRadius_Property(myRectangle, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new UniEconomy_FuseReactiveEach_Items_Property(temp, __selector2);
        myBlur = new Fuse.Effects.Blur();
        myBlur_Radius_inst = new UniEconomy_FuseEffectsBlur_Radius_Property(myBlur, __selector3);
        var temp12 = new Fuse.Controls.ClientPanel();
        var temp13 = new Fuse.Controls.PageControl();
        var temp14 = new PageWithTitle();
        var temp15 = new Fuse.Controls.Panel();
        var temp16 = new Fuse.Gestures.WhilePressed();
        var temp17 = new Fuse.Animations.Rotate();
        var temp18 = new Fuse.Animations.Scale();
        var temp19 = new Fuse.Animations.Change<float4>(myRectangle_Color_inst);
        var temp20 = new Fuse.Animations.Change<float4>(myRectangle_CornerRadius_inst);
        var temp21 = new PageWithTitle();
        var temp22 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp23 = new Fuse.Controls.ScrollView();
        var temp24 = new Fuse.Controls.Panel();
        var temp25 = new Fuse.Layouts.ColumnLayout();
        var item = new Template(this);
        var temp26 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "items");
        temp_eb0 = new Fuse.Reactive.EventBinding("addItem");
        var temp27 = new PageWithTitle();
        var temp28 = new Fuse.Controls.Grid();
        var temp29 = new Fuse.Controls.Image();
        var temp30 = new Fuse.Controls.Slider();
        var temp31 = new Fuse.Triggers.ProgressAnimation();
        var temp32 = new Fuse.Animations.Change<float>(myBlur_Radius_inst);
        temp12.Children.Add(temp13);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp21);
        temp13.Children.Add(temp27);
        temp14.Title = "Basic animation";
        temp14.Color = float4(0.9960784f, 0.9921569f, 0.9882353f, 1f);
        temp14.HeaderColor = float4(0.3490196f, 0.372549f, 1f, 1f);
        temp14.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp14.Instructions = "Tap and hold the rectangle";
        temp14.Children.Add(temp15);
        temp15.Children.Add(myRectangle);
        myRectangle.CornerRadius = float4(0f, 0f, 0f, 0f);
        myRectangle.Color = float4(0.282353f, 0.5803922f, 0.8980392f, 1f);
        myRectangle.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Name = __selector4;
        myRectangle.Children.Add(temp16);
        temp16.Animators.Add(temp17);
        temp16.Animators.Add(temp18);
        temp16.Animators.Add(temp19);
        temp16.Animators.Add(temp20);
        temp17.Degrees = 45f;
        temp17.Easing = Fuse.Animations.Easing.CubicInOut;
        temp17.Duration = 0.5;
        temp18.Factor = 2f;
        temp18.Easing = Fuse.Animations.Easing.CubicInOut;
        temp18.Duration = 0.5;
        temp19.Value = float4(0.9882353f, 0.3176471f, 0.5215687f, 1f);
        temp19.Duration = 0.3;
        temp20.Value = float4(15f, 15f, 15f, 15f);
        temp20.Duration = 0.3;
        temp21.Title = "Logic with JavaScript";
        temp21.Color = float4(1f, 1f, 1f, 1f);
        temp21.HeaderColor = float4(0.9647059f, 0.5607843f, 0.8431373f, 1f);
        temp21.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp21.Instructions = "Click the screen to add items";
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb0.OnEvent);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp23);
        temp21.Bindings.Add(temp_eb0);
        temp22.Code = "var Observable = require('FuseJS/Observable');\n\t\t\t\t\titems = Observable();\n\t\t\t\t\tfunction addItem(){\n\t\t\t\t\t\titems.add({\n\t\t\t\t\t\t\tcolor : [Math.random(), Math.random(), Math.random(), 1],\n\t\t\t\t\t\t\theight : (Math.random() + 1.0) * 80\n\t\t\t\t\t\t});\n\t\t\t\t\t}\n\t\t\t\t\tmodule.exports = {\n\t\t\t\t\t\titems : items,\n\t\t\t\t\t\taddItem : addItem\n\t\t\t\t\t};";
        temp22.LineNumber = 37;
        temp22.FileName = "MainView.ux";
        temp23.Children.Add(temp24);
        temp24.Layout = temp25;
        temp24.Children.Add(temp);
        temp25.ColumnCount = 3;
        temp.Templates.Add(item);
        temp.Bindings.Add(temp26);
        temp27.Title = "Realtime effects";
        temp27.Color = float4(1f, 1f, 1f, 1f);
        temp27.HeaderColor = float4(0.172549f, 0.682353f, 0.2470588f, 1f);
        temp27.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp27.Instructions = "Use the slider to blur the logo";
        temp27.Children.Add(temp28);
        temp28.RowCount = 2;
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp30);
        temp29.Color = float4(0f, 0f, 0f, 1f);
        temp29.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/FuseLogo.png"));
        temp29.Effects.Add(myBlur);
        myBlur.Radius = 0f;
        temp30.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp30.Margin = float4(40f, 0f, 40f, 0f);
        temp30.Children.Add(temp31);
        temp31.Animators.Add(temp32);
        temp32.Value = 10f;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(myRectangle);
        __g_nametable.Objects.Add(myBlur);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "CornerRadius";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Radius";
    static global::Uno.UX.Selector __selector4 = "myRectangle";
}
