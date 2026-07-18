FUN_00566e70:
00566E70  55                        PUSH EBP
00566E71  8B EC                     MOV EBP,ESP
00566E73  56                        PUSH ESI
00566E74  57                        PUSH EDI
00566E75  8B F9                     MOV EDI,ECX
00566E77  E8 74 25 1B 00            CALL 0x007193f0
00566E7C  A1 00 73 80 00            MOV EAX,[0x00807300]
00566E81  25 FF 00 00 00            AND EAX,0xff
00566E86  83 E8 02                  SUB EAX,0x2
00566E89  75 67                     JNZ 0x00566ef2
00566E8B  8B 87 8F 0F 00 00         MOV EAX,dword ptr [EDI + 0xf8f]
00566E91  8D B7 8F 0F 00 00         LEA ESI,[EDI + 0xf8f]
00566E97  85 C0                     TEST EAX,EAX
00566E99  74 0F                     JZ 0x00566eaa
00566E9B  56                        PUSH ESI
00566E9C  E8 BF 26 1B 00            CALL 0x00719560
00566EA1  56                        PUSH ESI
00566EA2  E8 B9 2D 1B 00            CALL 0x00719c60
00566EA7  83 C4 08                  ADD ESP,0x8
LAB_00566eaa:
00566EAA  81 C7 40 06 00 00         ADD EDI,0x640
00566EB0  57                        PUSH EDI
00566EB1  6A 03                     PUSH 0x3
00566EB3  6A 00                     PUSH 0x0
00566EB5  E8 56 25 1B 00            CALL 0x00719410
00566EBA  83 C4 0C                  ADD ESP,0xc
00566EBD  89 06                     MOV dword ptr [ESI],EAX
00566EBF  85 C0                     TEST EAX,EAX
00566EC1  74 2F                     JZ 0x00566ef2
00566EC3  56                        PUSH ESI
00566EC4  E8 37 2A 1B 00            CALL 0x00719900
00566EC9  83 C4 04                  ADD ESP,0x4
00566ECC  85 C0                     TEST EAX,EAX
00566ECE  75 22                     JNZ 0x00566ef2
00566ED0  56                        PUSH ESI
00566ED1  E8 DA 2C 1B 00            CALL 0x00719bb0
00566ED6  83 C4 04                  ADD ESP,0x4
00566ED9  85 C0                     TEST EAX,EAX
00566EDB  74 15                     JZ 0x00566ef2
00566EDD  56                        PUSH ESI
00566EDE  E8 7D 2A 1B 00            CALL 0x00719960
00566EE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00566EE6  56                        PUSH ESI
00566EE7  6A 01                     PUSH 0x1
00566EE9  50                        PUSH EAX
00566EEA  E8 01 2B 1B 00            CALL 0x007199f0
00566EEF  83 C4 10                  ADD ESP,0x10
LAB_00566ef2:
00566EF2  5F                        POP EDI
00566EF3  5E                        POP ESI
00566EF4  5D                        POP EBP
00566EF5  C2 04 00                  RET 0x4
