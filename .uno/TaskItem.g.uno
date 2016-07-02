[Uno.Compiler.UxGenerated]
public partial class TaskItem: Fuse.Controls.DockPanel
{
    global::Uno.UX.Property<Fuse.Resources.ImageSource> temp_Source_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    static TaskItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TaskItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Image();
        temp_Source_inst = new UniEconomy_FuseControlsImage_Source_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp1, __selector1);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp2, __selector1);
        var temp3 = new Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>(temp_Source_inst, "image");
        var temp4 = new Fuse.Controls.Grid();
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "text");
        var temp6 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "timeSlot");
        var temp7 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        this.Margin = float4(1f, 1f, 1f, 1f);
        this.Padding = float4(15f, 20f, 15f, 20f);
        temp.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Left);
        temp.Bindings.Add(temp3);
        temp4.RowCount = 2;
        temp4.Margin = float4(40f, 0f, 40f, 0f);
        temp4.Children.Add(temp1);
        temp4.Children.Add(temp2);
        temp1.Bindings.Add(temp5);
        temp2.TextColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.Bindings.Add(temp6);
        this.Background = temp7;
        this.Children.Add(temp);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Source";
    static global::Uno.UX.Selector __selector1 = "Value";
}
