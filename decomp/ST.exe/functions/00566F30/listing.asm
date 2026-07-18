FUN_00566f30:
00566F30  55                        PUSH EBP
00566F31  8B EC                     MOV EBP,ESP
00566F33  56                        PUSH ESI
00566F34  57                        PUSH EDI
00566F35  8B F9                     MOV EDI,ECX
00566F37  E8 B4 24 1B 00            CALL 0x007193f0
00566F3C  A1 00 73 80 00            MOV EAX,[0x00807300]
00566F41  25 FF 00 00 00            AND EAX,0xff
00566F46  83 E8 02                  SUB EAX,0x2
00566F49  75 67                     JNZ 0x00566fb2
00566F4B  8B 87 8F 0F 00 00         MOV EAX,dword ptr [EDI + 0xf8f]
00566F51  8D B7 8F 0F 00 00         LEA ESI,[EDI + 0xf8f]
00566F57  85 C0                     TEST EAX,EAX
00566F59  74 0F                     JZ 0x00566f6a
00566F5B  56                        PUSH ESI
00566F5C  E8 FF 25 1B 00            CALL 0x00719560
00566F61  56                        PUSH ESI
00566F62  E8 F9 2C 1B 00            CALL 0x00719c60
00566F67  83 C4 08                  ADD ESP,0x8
LAB_00566f6a:
00566F6A  81 C7 40 06 00 00         ADD EDI,0x640
00566F70  57                        PUSH EDI
00566F71  6A 03                     PUSH 0x3
00566F73  6A 00                     PUSH 0x0
00566F75  E8 96 24 1B 00            CALL 0x00719410
00566F7A  83 C4 0C                  ADD ESP,0xc
00566F7D  89 06                     MOV dword ptr [ESI],EAX
00566F7F  85 C0                     TEST EAX,EAX
00566F81  74 2F                     JZ 0x00566fb2
00566F83  56                        PUSH ESI
00566F84  E8 77 29 1B 00            CALL 0x00719900
00566F89  83 C4 04                  ADD ESP,0x4
00566F8C  85 C0                     TEST EAX,EAX
00566F8E  75 22                     JNZ 0x00566fb2
00566F90  56                        PUSH ESI
00566F91  E8 1A 2C 1B 00            CALL 0x00719bb0
00566F96  83 C4 04                  ADD ESP,0x4
00566F99  85 C0                     TEST EAX,EAX
00566F9B  74 15                     JZ 0x00566fb2
00566F9D  56                        PUSH ESI
00566F9E  E8 BD 29 1B 00            CALL 0x00719960
00566FA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00566FA6  56                        PUSH ESI
00566FA7  6A 01                     PUSH 0x1
00566FA9  50                        PUSH EAX
00566FAA  E8 41 2A 1B 00            CALL 0x007199f0
00566FAF  83 C4 10                  ADD ESP,0x10
LAB_00566fb2:
00566FB2  5F                        POP EDI
00566FB3  5E                        POP ESI
00566FB4  5D                        POP EBP
00566FB5  C2 04 00                  RET 0x4
