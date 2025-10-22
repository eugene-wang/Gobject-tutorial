//
//  main.c
//  Gobject-tutorial
//
//  Created by yeu-jiun wang on 2025/10/22.
//

#include <glib-object.h>
#include "tdouble.h"

int
main (int argc, char **argv) {
    TDouble *d, *e, *f;

    double value;

    d = t_double_new (10.0);
    if (t_double_get_value (d, &value))
        g_print ("t_double_get_value succesfully assigned %lf to value.\n", value);
    else
        g_print ("t_double_get_value failed.\n");

    t_double_set_value (d, -20.0);
    g_print ("Now, set d (tDouble object) with %lf.\n", -20.0);
    if (t_double_get_value (d, &value))
        g_print ("t_double_get_value succesfully assigned %lf to value.\n", value);
    else
        g_print ("t_double_get_value failed.\n");
    
    e = t_double_new (7.0);
    f = t_double_add(d, e);
    
    if (t_double_get_value (f, &value))
        g_print ("f: t_double_get_value succesfully assigned %lf to value.\n", value);
    else
        g_print ("F: t_double_get_value failed.\n");
    
    g_object_unref (d);
    g_object_unref (e);
    g_object_unref (f);

  return 0;
}


