FUN_0075dd30:
0075DD30  55                        PUSH EBP
0075DD31  8B EC                     MOV EBP,ESP
0075DD33  83 EC 28                  SUB ESP,0x28
0075DD36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075DD39  8B 81 B6 01 00 00         MOV EAX,dword ptr [ECX + 0x1b6]
0075DD3F  8B 51 68                  MOV EDX,dword ptr [ECX + 0x68]
0075DD42  8B 89 32 01 00 00         MOV ECX,dword ptr [ECX + 0x132]
0075DD48  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075DD4B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0075DD4E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075DD51  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0075DD54  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0075DD57  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0075DD5A  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0075DD5D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075DD60  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075DD63  48                        DEC EAX
0075DD64  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0075DD67  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075DD6A  0F 88 FF 00 00 00         JS 0x0075de6f
0075DD70  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075DD73  53                        PUSH EBX
0075DD74  40                        INC EAX
0075DD75  56                        PUSH ESI
0075DD76  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075DD79  57                        PUSH EDI
0075DD7A  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
0075DD81  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0075dd84:
0075DD84  8B 06                     MOV EAX,dword ptr [ESI]
0075DD86  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0075DD89  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075DD8C  8B 3C 10                  MOV EDI,dword ptr [EAX + EDX*0x1]
0075DD8F  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
0075DD92  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075DD95  83 C3 04                  ADD EBX,0x4
0075DD98  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
0075DD9B  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
0075DD9E  83 C2 04                  ADD EDX,0x4
0075DDA1  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0075DDA4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075DDA7  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0075DDAA  8B 4C 0A FC               MOV ECX,dword ptr [EDX + ECX*0x1 + -0x4]
0075DDAE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0075DDB1  8B 4B FC                  MOV ECX,dword ptr [EBX + -0x4]
0075DDB4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075DDB7  85 DB                     TEST EBX,EBX
0075DDB9  0F 86 A0 00 00 00         JBE 0x0075de5f
0075DDBF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075DDC2  8B F7                     MOV ESI,EDI
0075DDC4  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0075DDC7  2B F0                     SUB ESI,EAX
0075DDC9  2B F8                     SUB EDI,EAX
0075DDCB  2B D0                     SUB EDX,EAX
0075DDCD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0075DDD0  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0075DDD3  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075DDD6  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
0075DDD9  EB 06                     JMP 0x0075dde1
LAB_0075dddb:
0075DDDB  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075DDDE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0075dde1:
0075DDE1  33 D2                     XOR EDX,EDX
0075DDE3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075DDE6  8A 14 06                  MOV DL,byte ptr [ESI + EAX*0x1]
0075DDE9  83 C1 04                  ADD ECX,0x4
0075DDEC  8B F2                     MOV ESI,EDX
0075DDEE  33 D2                     XOR EDX,EDX
0075DDF0  8A 10                     MOV DL,byte ptr [EAX]
0075DDF2  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0075DDF5  33 D2                     XOR EDX,EDX
0075DDF7  8A 14 07                  MOV DL,byte ptr [EDI + EAX*0x1]
0075DDFA  8B FA                     MOV EDI,EDX
0075DDFC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075DDFF  2B 14 BB                  SUB EDX,dword ptr [EBX + EDI*0x4]
0075DE02  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0075DE05  2B D6                     SUB EDX,ESI
0075DE07  8A 92 FF 00 00 00         MOV DL,byte ptr [EDX + 0xff]
0075DE0D  88 51 FC                  MOV byte ptr [ECX + -0x4],DL
0075DE10  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075DE13  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075DE16  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0075DE19  03 14 BB                  ADD EDX,dword ptr [EBX + EDI*0x4]
0075DE1C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DE1F  8B DF                     MOV EBX,EDI
0075DE21  C1 FA 10                  SAR EDX,0x10
0075DE24  2B DA                     SUB EBX,EDX
0075DE26  2B DE                     SUB EBX,ESI
0075DE28  8A 93 FF 00 00 00         MOV DL,byte ptr [EBX + 0xff]
0075DE2E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0075DE31  88 51 FD                  MOV byte ptr [ECX + -0x3],DL
0075DE34  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0075DE37  2B 3C 9A                  SUB EDI,dword ptr [EDX + EBX*0x4]
0075DE3A  2B FE                     SUB EDI,ESI
0075DE3C  40                        INC EAX
0075DE3D  8A 97 FF 00 00 00         MOV DL,byte ptr [EDI + 0xff]
0075DE43  88 51 FE                  MOV byte ptr [ECX + -0x2],DL
0075DE46  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075DE49  8A 54 02 FF               MOV DL,byte ptr [EDX + EAX*0x1 + -0x1]
0075DE4D  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
0075DE50  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075DE53  4A                        DEC EDX
0075DE54  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075DE57  75 82                     JNZ 0x0075dddb
0075DE59  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075DE5C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_0075de5f:
0075DE5F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075DE62  48                        DEC EAX
0075DE63  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075DE66  0F 85 18 FF FF FF         JNZ 0x0075dd84
0075DE6C  5F                        POP EDI
0075DE6D  5E                        POP ESI
0075DE6E  5B                        POP EBX
LAB_0075de6f:
0075DE6F  8B E5                     MOV ESP,EBP
0075DE71  5D                        POP EBP
0075DE72  C2 14 00                  RET 0x14
