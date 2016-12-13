// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.32.14/Layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class GridLayout :1046
// {
::g::Fuse::Layouts::Layout_type* GridLayout_typeof();
void GridLayout__ctor_2_fn(GridLayout* __this);
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value);
void GridLayout__Changed_fn(GridLayout* __this);
void GridLayout__ColumnAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c);
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value);
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__ColumnRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c);
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value);
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__GenDefaultColumn_fn(GridLayout* __this, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GenDefaultRow_fn(GridLayout* __this, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetActualPositions_fn(GridLayout* __this, uObject* elements);
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetColumns_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetContentSize_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__GetRows_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* __retval);
void GridLayout__Measure_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__New2_fn(GridLayout** __retval);
void GridLayout__RowAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r);
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__RowRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r);
void GridLayout__get_Rows_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_Rows_fn(GridLayout* __this, uString* value);

struct GridLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualColumnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualColumnProperty() { return GridLayout_typeof()->Init(), _actualColumnProperty_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualRowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualRowProperty() { return GridLayout_typeof()->Init(), _actualRowProperty_; }
    float _cellSpacing;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnProperty() { return GridLayout_typeof()->Init(), _columnProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _columns;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnSpanProperty() { return GridLayout_typeof()->Init(), _columnSpanProperty_; }
    int _contentAlignment;
    uStrong< ::g::Fuse::Layouts::Column*> _defaultColumn;
    uStrong< ::g::Fuse::Layouts::Row*> _defaultRow;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowProperty() { return GridLayout_typeof()->Init(), _rowProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _rows;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowSpanProperty() { return GridLayout_typeof()->Init(), _rowSpanProperty_; }
    static uSStrong< ::g::Fuse::Layouts::Column*> _staticDefaultColumn_;
    static uSStrong< ::g::Fuse::Layouts::Column*>& _staticDefaultColumn() { return GridLayout_typeof()->Init(), _staticDefaultColumn_; }
    static uSStrong< ::g::Fuse::Layouts::Row*> _staticDefaultRow_;
    static uSStrong< ::g::Fuse::Layouts::Row*>& _staticDefaultRow() { return GridLayout_typeof()->Init(), _staticDefaultRow_; }

    void ctor_2();
    float CellSpacing();
    void CellSpacing(float value);
    void Changed();
    void ColumnAdded(::g::Fuse::Layouts::Column* c);
    int ColumnCount();
    void ColumnCount(int value);
    uObject* ColumnList();
    void ColumnRemoved(::g::Fuse::Layouts::Column* c);
    int ContentAlignment();
    void ContentAlignment(int value);
    float EffectiveCellSpacing();
    int EffectiveContentAlignment();
    ::g::Fuse::Layouts::Column* GenDefaultColumn();
    ::g::Fuse::Layouts::Row* GenDefaultRow();
    int GetActualColumn(::g::Fuse::Visual* elm);
    void GetActualPositions(uObject* elements);
    int GetActualRow(::g::Fuse::Visual* elm);
    ::g::Fuse::Layouts::Column* GetColumns(int column);
    ::g::Fuse::Layouts::Row* GetRows(int row);
    ::g::Uno::Float2 Measure(uObject* elements, ::g::Fuse::LayoutParams lp);
    void RowAdded(::g::Fuse::Layouts::Row* r);
    uObject* RowList();
    void RowRemoved(::g::Fuse::Layouts::Row* r);
    uString* Rows();
    void Rows(uString* value);
    static int GetColumn(::g::Fuse::Visual* elm);
    static int GetColumnSpan(::g::Fuse::Visual* elm);
    static int GetRowSpan(::g::Fuse::Visual* elm);
    static GridLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
