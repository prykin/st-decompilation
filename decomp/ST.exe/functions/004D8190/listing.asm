FUN_004d8190:
004D8190  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
004D8195  56                        PUSH ESI
004D8196  85 C0                     TEST EAX,EAX
004D8198  74 5F                     JZ 0x004d81f9
004D819A  A1 40 A1 7F 00            MOV EAX,[0x007fa140]
004D819F  50                        PUSH EAX
004D81A0  E8 27 91 1D 00            CALL 0x006b12cc
004D81A5  8B 0D 3C A1 7F 00         MOV ECX,dword ptr [0x007fa13c]
004D81AB  8B F0                     MOV ESI,EAX
004D81AD  51                        PUSH ECX
004D81AE  E8 19 91 1D 00            CALL 0x006b12cc
004D81B3  50                        PUSH EAX
004D81B4  56                        PUSH ESI
004D81B5  E8 EE 90 1D 00            CALL 0x006b12a8
004D81BA  8B F0                     MOV ESI,EAX
004D81BC  56                        PUSH ESI
004D81BD  E8 BE 90 1D 00            CALL 0x006b1280
004D81C2  83 C4 14                  ADD ESP,0x14
004D81C5  3D C2 01 00 00            CMP EAX,0x1c2
004D81CA  7D 2D                     JGE 0x004d81f9
004D81CC  56                        PUSH ESI
004D81CD  56                        PUSH ESI
004D81CE  E8 09 91 1D 00            CALL 0x006b12dc
004D81D3  83 C4 08                  ADD ESP,0x8
004D81D6  50                        PUSH EAX
004D81D7  6A 19                     PUSH 0x19
004D81D9  E8 EE 90 1D 00            CALL 0x006b12cc
004D81DE  83 C4 04                  ADD ESP,0x4
004D81E1  50                        PUSH EAX
004D81E2  E8 F5 90 1D 00            CALL 0x006b12dc
004D81E7  50                        PUSH EAX
004D81E8  E8 93 90 1D 00            CALL 0x006b1280
004D81ED  83 C4 0C                  ADD ESP,0xc
004D81F0  D1 E0                     SHL EAX,0x1
004D81F2  A3 44 A1 7F 00            MOV [0x007fa144],EAX
004D81F7  5E                        POP ESI
004D81F8  C3                        RET
LAB_004d81f9:
004D81F9  B8 FF FF FF 0F            MOV EAX,0xfffffff
004D81FE  5E                        POP ESI
004D81FF  A3 44 A1 7F 00            MOV [0x007fa144],EAX
004D8204  C3                        RET
