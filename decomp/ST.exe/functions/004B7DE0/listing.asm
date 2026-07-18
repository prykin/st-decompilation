FUN_004b7de0:
004B7DE0  56                        PUSH ESI
004B7DE1  8B F1                     MOV ESI,ECX
004B7DE3  33 C0                     XOR EAX,EAX
004B7DE5  83 BE D0 04 00 00 02      CMP dword ptr [ESI + 0x4d0],0x2
004B7DEC  75 2C                     JNZ 0x004b7e1a
004B7DEE  57                        PUSH EDI
004B7DEF  50                        PUSH EAX
004B7DF0  8B CE                     MOV ECX,ESI
004B7DF2  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004B7DFC  E8 F6 AE F4 FF            CALL 0x00402cf7
004B7E01  8B 06                     MOV EAX,dword ptr [ESI]
004B7E03  68 CC 03 00 00            PUSH 0x3cc
004B7E08  6A 03                     PUSH 0x3
004B7E0A  8B CE                     MOV ECX,ESI
004B7E0C  BF 01 00 00 00            MOV EDI,0x1
004B7E11  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004B7E17  8B C7                     MOV EAX,EDI
004B7E19  5F                        POP EDI
LAB_004b7e1a:
004B7E1A  5E                        POP ESI
004B7E1B  C3                        RET
