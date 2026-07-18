FUN_004a8f20:
004A8F20  55                        PUSH EBP
004A8F21  8B EC                     MOV EBP,ESP
004A8F23  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004A8F27  75 72                     JNZ 0x004a8f9b
004A8F29  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A8F2F  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8F34  83 EC 08                  SUB ESP,0x8
004A8F37  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A8F3D  DD 1C 24                  FSTP double ptr [ESP]
004A8F40  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
004A8F46  83 EC 08                  SUB ESP,0x8
004A8F49  DD 1C 24                  FSTP double ptr [ESP]
004A8F4C  50                        PUSH EAX
004A8F4D  E8 BE 46 23 00            CALL 0x006dd610
004A8F52  A1 98 75 80 00            MOV EAX,[0x00807598]
004A8F57  DD 80 98 00 00 00         FLD double ptr [EAX + 0x98]
004A8F5D  D9 1D D0 73 80 00         FSTP float ptr [0x008073d0]
004A8F63  DD 80 A0 00 00 00         FLD double ptr [EAX + 0xa0]
004A8F69  D9 1D D4 73 80 00         FSTP float ptr [0x008073d4]
004A8F6F  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
004A8F75  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A8F7B  E8 08 53 28 00            CALL 0x0072e288
004A8F80  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A8F86  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A8F8C  A3 D8 73 80 00            MOV [0x008073d8],EAX
004A8F91  E8 F2 52 28 00            CALL 0x0072e288
004A8F96  A3 DC 73 80 00            MOV [0x008073dc],EAX
LAB_004a8f9b:
004A8F9B  5D                        POP EBP
004A8F9C  C2 04 00                  RET 0x4
