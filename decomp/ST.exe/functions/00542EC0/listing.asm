InterSystemC::~InterSystemC:
00542EC0  56                        PUSH ESI
00542EC1  8B F1                     MOV ESI,ECX
00542EC3  57                        PUSH EDI
00542EC4  33 FF                     XOR EDI,EDI
00542EC6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00542EC9  3B C7                     CMP EAX,EDI
00542ECB  74 0C                     JZ 0x00542ed9
00542ECD  50                        PUSH EAX
00542ECE  E8 8D D6 1C 00            CALL 0x00710560
00542ED3  83 C4 04                  ADD ESP,0x4
00542ED6  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
LAB_00542ed9:
00542ED9  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00542EDC  3B C7                     CMP EAX,EDI
00542EDE  74 0C                     JZ 0x00542eec
00542EE0  50                        PUSH EAX
00542EE1  E8 7A D6 1C 00            CALL 0x00710560
00542EE6  83 C4 04                  ADD ESP,0x4
00542EE9  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
LAB_00542eec:
00542EEC  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00542EEF  3B C7                     CMP EAX,EDI
00542EF1  74 0C                     JZ 0x00542eff
00542EF3  50                        PUSH EAX
00542EF4  E8 67 D6 1C 00            CALL 0x00710560
00542EF9  83 C4 04                  ADD ESP,0x4
00542EFC  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
LAB_00542eff:
00542EFF  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00542F02  3B C7                     CMP EAX,EDI
00542F04  74 0C                     JZ 0x00542f12
00542F06  50                        PUSH EAX
00542F07  E8 54 D6 1C 00            CALL 0x00710560
00542F0C  83 C4 04                  ADD ESP,0x4
00542F0F  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
LAB_00542f12:
00542F12  8B CE                     MOV ECX,ESI
00542F14  E8 B7 23 1A 00            CALL 0x006e52d0
00542F19  5F                        POP EDI
00542F1A  5E                        POP ESI
00542F1B  C3                        RET
