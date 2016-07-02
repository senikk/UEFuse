[Uno.Compiler.UxGenerated]
public partial class CompanySelect: Fuse.Controls.DockPanel
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        internal readonly CompanySelect __parent;
        public Template(CompanySelect parent): base(null, false)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        public override object New()
        {
            var self = new CompanyItem();
            return self;
        }
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    static CompanySelect()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CompanySelect()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new UniEconomy_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Grid();
        var temp2 = new Fuse.Controls.Image();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Controls.ScrollView();
        var temp5 = new Fuse.Controls.DockPanel();
        var temp6 = new Fuse.Controls.StackPanel();
        var temp7 = new Template(this);
        var temp8 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "companies");
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
        temp1.Rows = "0.5*,auto";
        temp1.RowCount = 2;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp4);
        temp2.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.Grid.SetRow(temp2, 0);
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/ue.png"));
        temp3.Value = "Velg firma";
        temp3.FontSize = 12f;
        temp3.Color = float4(1f, 1f, 1f, 1f);
        temp3.Margin = float4(2f, 2f, 2f, 2f);
        temp4.Children.Add(temp5);
        global::Fuse.Controls.Grid.SetRow(temp5, 1);
        temp5.Background = temp9;
        temp5.Children.Add(temp6);
        temp6.Children.Add(temp);
        temp.Templates.Add(temp7);
        temp.Bindings.Add(temp8);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
