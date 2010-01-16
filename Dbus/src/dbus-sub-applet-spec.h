/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_cd_dbus_sub_applet_MARSHAL_H__
#define __dbus_glib_marshal_cd_dbus_sub_applet_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* BOOLEAN:STRING,DOUBLE,DOUBLE,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:1) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER (GClosure     *closure,
                                                                                               GValue       *return_value,
                                                                                               guint         n_param_values,
                                                                                               const GValue *param_values,
                                                                                               gpointer      invocation_hint,
                                                                                               gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER (GClosure     *closure,
                                                                                   GValue       *return_value G_GNUC_UNUSED,
                                                                                   guint         n_param_values,
                                                                                   const GValue *param_values,
                                                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                                                   gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER) (gpointer     data1,
                                                                                 gpointer     arg_1,
                                                                                 gdouble      arg_2,
                                                                                 gdouble      arg_3,
                                                                                 gpointer     arg_4,
                                                                                 gpointer     arg_5,
                                                                                 gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 6);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_double (param_values + 2),
                       g_marshal_value_peek_double (param_values + 3),
                       g_marshal_value_peek_string (param_values + 4),
                       g_marshal_value_peek_pointer (param_values + 5),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:2) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                                        GValue       *return_value,
                                                                                        guint         n_param_values,
                                                                                        const GValue *param_values,
                                                                                        gpointer      invocation_hint,
                                                                                        gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                            GValue       *return_value G_GNUC_UNUSED,
                                                                            guint         n_param_values,
                                                                            const GValue *param_values,
                                                                            gpointer      invocation_hint G_GNUC_UNUSED,
                                                                            gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER) (gpointer     data1,
                                                                          gpointer     arg_1,
                                                                          gpointer     arg_2,
                                                                          gpointer     arg_3,
                                                                          gpointer     arg_4,
                                                                          gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_string (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:BOXED,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:3) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__BOXED_POINTER (GClosure     *closure,
                                                                         GValue       *return_value,
                                                                         guint         n_param_values,
                                                                         const GValue *param_values,
                                                                         gpointer      invocation_hint,
                                                                         gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__BOXED_POINTER (GClosure     *closure,
                                                             GValue       *return_value G_GNUC_UNUSED,
                                                             guint         n_param_values,
                                                             const GValue *param_values,
                                                             gpointer      invocation_hint G_GNUC_UNUSED,
                                                             gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__BOXED_POINTER) (gpointer     data1,
                                                           gpointer     arg_1,
                                                           gpointer     arg_2,
                                                           gpointer     data2);
  register GMarshalFunc_BOOLEAN__BOXED_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__BOXED_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_boxed (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:4) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                                 GValue       *return_value,
                                                                                 guint         n_param_values,
                                                                                 const GValue *param_values,
                                                                                 gpointer      invocation_hint,
                                                                                 gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                     GValue       *return_value G_GNUC_UNUSED,
                                                                     guint         n_param_values,
                                                                     const GValue *param_values,
                                                                     gpointer      invocation_hint G_GNUC_UNUSED,
                                                                     gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (gpointer     data1,
                                                                   gpointer     arg_1,
                                                                   gpointer     arg_2,
                                                                   gpointer     arg_3,
                                                                   gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,INT,STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:5) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_INT_STRING_POINTER (GClosure     *closure,
                                                                                     GValue       *return_value,
                                                                                     guint         n_param_values,
                                                                                     const GValue *param_values,
                                                                                     gpointer      invocation_hint,
                                                                                     gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_INT_STRING_POINTER (GClosure     *closure,
                                                                         GValue       *return_value G_GNUC_UNUSED,
                                                                         guint         n_param_values,
                                                                         const GValue *param_values,
                                                                         gpointer      invocation_hint G_GNUC_UNUSED,
                                                                         gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_INT_STRING_POINTER) (gpointer     data1,
                                                                       gpointer     arg_1,
                                                                       gint         arg_2,
                                                                       gpointer     arg_3,
                                                                       gpointer     arg_4,
                                                                       gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_INT_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_INT_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       g_marshal_value_peek_string (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.P9QN6U:6) */
extern void dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                                          GValue       *return_value,
                                                                          guint         n_param_values,
                                                                          const GValue *param_values,
                                                                          gpointer      invocation_hint,
                                                                          gpointer      marshal_data);
void
dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                              GValue       *return_value G_GNUC_UNUSED,
                                                              guint         n_param_values,
                                                              const GValue *param_values,
                                                              gpointer      invocation_hint G_GNUC_UNUSED,
                                                              gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_POINTER) (gpointer     data1,
                                                            gpointer     arg_1,
                                                            gpointer     arg_2,
                                                            gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

G_END_DECLS

#endif /* __dbus_glib_marshal_cd_dbus_sub_applet_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_cd_dbus_sub_applet_methods[] = {
  { (GCallback) cd_dbus_sub_applet_set_quick_info, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER, 0 },
  { (GCallback) cd_dbus_sub_applet_set_label, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER, 77 },
  { (GCallback) cd_dbus_sub_applet_set_icon, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER, 146 },
  { (GCallback) cd_dbus_sub_applet_set_emblem, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_INT_STRING_POINTER, 214 },
  { (GCallback) cd_dbus_sub_applet_animate, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_INT_STRING_POINTER, 298 },
  { (GCallback) cd_dbus_sub_applet_show_dialog, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_INT_STRING_POINTER, 384 },
  { (GCallback) cd_dbus_sub_applet_ask_question, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_POINTER, 470 },
  { (GCallback) cd_dbus_sub_applet_ask_value, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_DOUBLE_DOUBLE_STRING_POINTER, 544 },
  { (GCallback) cd_dbus_sub_applet_ask_text, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_STRING_STRING_POINTER, 648 },
  { (GCallback) cd_dbus_sub_applet_add_sub_icons, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__BOXED_POINTER, 735 },
  { (GCallback) cd_dbus_sub_applet_remove_sub_icon, dbus_glib_marshal_cd_dbus_sub_applet_BOOLEAN__STRING_POINTER, 801 },
};

const DBusGObjectInfo dbus_glib_cd_dbus_sub_applet_object_info = {
  0,
  dbus_glib_cd_dbus_sub_applet_methods,
  11,
"org.cairodock.CairoDock.subapplet\0SetQuickInfo\0S\0cQuickInfo\0I\0s\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0SetLabel\0S\0cLabel\0I\0s\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0SetIcon\0S\0cImage\0I\0s\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0SetEmblem\0S\0cImage\0I\0s\0iPosition\0I\0i\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0Animate\0S\0cAnimation\0I\0s\0iNbRounds\0I\0i\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0ShowDialog\0S\0message\0I\0s\0iDuration\0I\0i\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0AskQuestion\0S\0cMessage\0I\0s\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0AskValue\0S\0cMessage\0I\0s\0fInitialValue\0I\0d\0fMaxlValue\0I\0d\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0AskText\0S\0cMessage\0I\0s\0cInitialText\0I\0s\0cIconID\0I\0s\0\0org.cairodock.CairoDock.subapplet\0AddSubIcons\0S\0pIconFields\0I\0as\0\0org.cairodock.CairoDock.subapplet\0RemoveSubIcon\0S\0cIconID\0I\0s\0\0\0",
"org.cairodock.CairoDock.subapplet\0on_click_sub_icon\0org.cairodock.CairoDock.subapplet\0on_middle_click_sub_icon\0org.cairodock.CairoDock.subapplet\0on_scroll_sub_icon\0org.cairodock.CairoDock.subapplet\0on_build_menu_sub_icon\0org.cairodock.CairoDock.subapplet\0on_menu_select_sub_icon\0org.cairodock.CairoDock.subapplet\0on_drop_data_sub_icon\0org.cairodock.CairoDock.subapplet\0on_answer_sub_icon\0\0",
"\0"
};

