STColl3C::sub_005FA070:
005FA070  56                        PUSH ESI
005FA071  8B F1                     MOV ESI,ECX
005FA073  83 BE DD 02 00 00 05      CMP dword ptr [ESI + 0x2dd],0x5
005FA07A  75 0C                     JNZ 0x005fa088
005FA07C  8B 06                     MOV EAX,dword ptr [ESI]
005FA07E  FF 50 20                  CALL dword ptr [EAX + 0x20]
005FA081  8B CE                     MOV ECX,ESI
005FA083  E8 CA B8 E0 FF            CALL 0x00405952
LAB_005fa088:
005FA088  8B CE                     MOV ECX,ESI
005FA08A  E8 88 94 E0 FF            CALL 0x00403517
005FA08F  5E                        POP ESI
005FA090  C3                        RET
