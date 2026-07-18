FUN_0072fa60:
0072FA60  55                        PUSH EBP
0072FA61  8B EC                     MOV EBP,ESP
0072FA63  83 EC 0C                  SUB ESP,0xc
0072FA66  68 88 00 00 00            PUSH 0x88
0072FA6B  6A 00                     PUSH 0x0
0072FA6D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FA70  50                        PUSH EAX
0072FA71  E8 9A B9 00 00            CALL 0x0073b410
0072FA76  83 C4 0C                  ADD ESP,0xc
0072FA79  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072FA7C  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072FA7F  85 D2                     TEST EDX,EDX
0072FA81  75 07                     JNZ 0x0072fa8a
0072FA83  33 C0                     XOR EAX,EAX
0072FA85  E9 2F 01 00 00            JMP 0x0072fbb9
LAB_0072fa8a:
0072FA8A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072FA8D  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072FA90  83 F9 2E                  CMP ECX,0x2e
0072FA93  75 2B                     JNZ 0x0072fac0
0072FA95  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072FA98  0F BE 42 01               MOVSX EAX,byte ptr [EDX + 0x1]
0072FA9C  85 C0                     TEST EAX,EAX
0072FA9E  74 20                     JZ 0x0072fac0
0072FAA0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072FAA3  83 C1 01                  ADD ECX,0x1
0072FAA6  51                        PUSH ECX
0072FAA7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FAAA  81 C2 80 00 00 00         ADD EDX,0x80
0072FAB0  52                        PUSH EDX
0072FAB1  E8 8A A7 00 00            CALL 0x0073a240
0072FAB6  83 C4 08                  ADD ESP,0x8
0072FAB9  33 C0                     XOR EAX,EAX
0072FABB  E9 F9 00 00 00            JMP 0x0072fbb9
LAB_0072fac0:
0072FAC0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0072FAC7  EB 09                     JMP 0x0072fad2
LAB_0072fac9:
0072FAC9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FACC  83 C0 01                  ADD EAX,0x1
0072FACF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0072fad2:
0072FAD2  68 04 FF 79 00            PUSH 0x79ff04
0072FAD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072FADA  51                        PUSH ECX
0072FADB  E8 E0 A6 00 00            CALL 0x0073a1c0
0072FAE0  83 C4 08                  ADD ESP,0x8
0072FAE3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072FAE6  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0072FAEA  75 08                     JNZ 0x0072faf4
0072FAEC  83 C8 FF                  OR EAX,0xffffffff
0072FAEF  E9 C5 00 00 00            JMP 0x0072fbb9
LAB_0072faf4:
0072FAF4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072FAF7  03 55 F4                  ADD EDX,dword ptr [EBP + -0xc]
0072FAFA  8A 02                     MOV AL,byte ptr [EDX]
0072FAFC  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0072FAFF  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072FB03  75 25                     JNZ 0x0072fb2a
0072FB05  83 7D F4 40               CMP dword ptr [EBP + -0xc],0x40
0072FB09  7D 1F                     JGE 0x0072fb2a
0072FB0B  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
0072FB0F  83 F9 2E                  CMP ECX,0x2e
0072FB12  74 16                     JZ 0x0072fb2a
0072FB14  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FB17  52                        PUSH EDX
0072FB18  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072FB1B  50                        PUSH EAX
0072FB1C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FB1F  51                        PUSH ECX
0072FB20  E8 1B E8 FF FF            CALL 0x0072e340
0072FB25  83 C4 0C                  ADD ESP,0xc
0072FB28  EB 66                     JMP 0x0072fb90
LAB_0072fb2a:
0072FB2A  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
0072FB2E  75 28                     JNZ 0x0072fb58
0072FB30  83 7D F4 40               CMP dword ptr [EBP + -0xc],0x40
0072FB34  7D 22                     JGE 0x0072fb58
0072FB36  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0072FB3A  83 FA 5F                  CMP EDX,0x5f
0072FB3D  74 19                     JZ 0x0072fb58
0072FB3F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FB42  50                        PUSH EAX
0072FB43  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072FB46  51                        PUSH ECX
0072FB47  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FB4A  83 C2 40                  ADD EDX,0x40
0072FB4D  52                        PUSH EDX
0072FB4E  E8 ED E7 FF FF            CALL 0x0072e340
0072FB53  83 C4 0C                  ADD ESP,0xc
0072FB56  EB 38                     JMP 0x0072fb90
LAB_0072fb58:
0072FB58  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
0072FB5C  75 2D                     JNZ 0x0072fb8b
0072FB5E  0F BE 45 F8               MOVSX EAX,byte ptr [EBP + -0x8]
0072FB62  85 C0                     TEST EAX,EAX
0072FB64  74 09                     JZ 0x0072fb6f
0072FB66  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
0072FB6A  83 F9 2C                  CMP ECX,0x2c
0072FB6D  75 1C                     JNZ 0x0072fb8b
LAB_0072fb6f:
0072FB6F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FB72  52                        PUSH EDX
0072FB73  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072FB76  50                        PUSH EAX
0072FB77  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FB7A  81 C1 80 00 00 00         ADD ECX,0x80
0072FB80  51                        PUSH ECX
0072FB81  E8 BA E7 FF FF            CALL 0x0072e340
0072FB86  83 C4 0C                  ADD ESP,0xc
0072FB89  EB 05                     JMP 0x0072fb90
LAB_0072fb8b:
0072FB8B  83 C8 FF                  OR EAX,0xffffffff
0072FB8E  EB 29                     JMP 0x0072fbb9
LAB_0072fb90:
0072FB90  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0072FB94  83 FA 2C                  CMP EDX,0x2c
0072FB97  75 02                     JNZ 0x0072fb9b
0072FB99  EB 1C                     JMP 0x0072fbb7
LAB_0072fb9b:
0072FB9B  0F BE 45 F8               MOVSX EAX,byte ptr [EBP + -0x8]
0072FB9F  85 C0                     TEST EAX,EAX
0072FBA1  75 02                     JNZ 0x0072fba5
0072FBA3  EB 12                     JMP 0x0072fbb7
LAB_0072fba5:
0072FBA5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072FBA8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072FBAB  8D 44 0A 01               LEA EAX,[EDX + ECX*0x1 + 0x1]
0072FBAF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0072FBB2  E9 12 FF FF FF            JMP 0x0072fac9
LAB_0072fbb7:
0072FBB7  33 C0                     XOR EAX,EAX
LAB_0072fbb9:
0072FBB9  8B E5                     MOV ESP,EBP
0072FBBB  5D                        POP EBP
0072FBBC  C3                        RET
