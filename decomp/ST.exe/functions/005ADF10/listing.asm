FUN_005adf10:
005ADF10  55                        PUSH EBP
005ADF11  8B EC                     MOV EBP,ESP
005ADF13  83 EC 48                  SUB ESP,0x48
005ADF16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005ADF1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005ADF1E  56                        PUSH ESI
005ADF1F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005ADF22  8D 4D B8                  LEA ECX,[EBP + -0x48]
005ADF25  6A 00                     PUSH 0x0
005ADF27  52                        PUSH EDX
005ADF28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005ADF2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005ADF31  E8 BA F8 17 00            CALL 0x0072d7f0
005ADF36  8B F0                     MOV ESI,EAX
005ADF38  83 C4 08                  ADD ESP,0x8
005ADF3B  85 F6                     TEST ESI,ESI
005ADF3D  75 7E                     JNZ 0x005adfbd
005ADF3F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005ADF42  8B CE                     MOV ECX,ESI
005ADF44  E8 10 55 E5 FF            CALL 0x00403459
005ADF49  8A 86 B5 20 00 00         MOV AL,byte ptr [ESI + 0x20b5]
005ADF4F  84 C0                     TEST AL,AL
005ADF51  74 45                     JZ 0x005adf98
005ADF53  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ADF58  8B 88 FC 02 00 00         MOV ECX,dword ptr [EAX + 0x2fc]
005ADF5E  83 F9 FF                  CMP ECX,-0x1
005ADF61  74 22                     JZ 0x005adf85
005ADF63  8B 90 18 03 00 00         MOV EDX,dword ptr [EAX + 0x318]
005ADF69  52                        PUSH EDX
005ADF6A  8B 90 14 03 00 00         MOV EDX,dword ptr [EAX + 0x314]
005ADF70  8B 80 40 03 00 00         MOV EAX,dword ptr [EAX + 0x340]
005ADF76  52                        PUSH EDX
005ADF77  6A FE                     PUSH -0x2
005ADF79  51                        PUSH ECX
005ADF7A  50                        PUSH EAX
005ADF7B  E8 50 55 10 00            CALL 0x006b34d0
005ADF80  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005adf85:
005ADF85  8B 88 EC 02 00 00         MOV ECX,dword ptr [EAX + 0x2ec]
005ADF8B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ADF91  51                        PUSH ECX
005ADF92  52                        PUSH EDX
005ADF93  E8 58 5B 10 00            CALL 0x006b3af0
LAB_005adf98:
005ADF98  6A FF                     PUSH -0x1
005ADF9A  6A 01                     PUSH 0x1
005ADF9C  6A 0C                     PUSH 0xc
005ADF9E  8B CE                     MOV ECX,ESI
005ADFA0  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005ADFA4  E8 48 6C E5 FF            CALL 0x00404bf1
005ADFA9  8B CE                     MOV ECX,ESI
005ADFAB  E8 EC 34 E5 FF            CALL 0x0040149c
005ADFB0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005ADFB3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005ADFB8  5E                        POP ESI
005ADFB9  8B E5                     MOV ESP,EBP
005ADFBB  5D                        POP EBP
005ADFBC  C3                        RET
LAB_005adfbd:
005ADFBD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005ADFC0  68 10 C8 7C 00            PUSH 0x7cc810
005ADFC5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005ADFCA  56                        PUSH ESI
005ADFCB  6A 00                     PUSH 0x0
005ADFCD  68 5B 02 00 00            PUSH 0x25b
005ADFD2  68 28 C7 7C 00            PUSH 0x7cc728
005ADFD7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005ADFDD  E8 EE F4 0F 00            CALL 0x006ad4d0
005ADFE2  83 C4 18                  ADD ESP,0x18
005ADFE5  85 C0                     TEST EAX,EAX
005ADFE7  74 01                     JZ 0x005adfea
005ADFE9  CC                        INT3
LAB_005adfea:
005ADFEA  68 5B 02 00 00            PUSH 0x25b
005ADFEF  68 28 C7 7C 00            PUSH 0x7cc728
005ADFF4  6A 00                     PUSH 0x0
005ADFF6  56                        PUSH ESI
005ADFF7  E8 44 7E 0F 00            CALL 0x006a5e40
005ADFFC  5E                        POP ESI
005ADFFD  8B E5                     MOV ESP,EBP
005ADFFF  5D                        POP EBP
005AE000  C3                        RET
