FUN_004f19d0:
004F19D0  55                        PUSH EBP
004F19D1  8B EC                     MOV EBP,ESP
004F19D3  A1 30 67 80 00            MOV EAX,[0x00806730]
004F19D8  3D 00 04 00 00            CMP EAX,0x400
004F19DD  0F 84 91 01 00 00         JZ 0x004f1b74
004F19E3  3D 00 05 00 00            CMP EAX,0x500
004F19E8  74 06                     JZ 0x004f19f0
004F19EA  33 C0                     XOR EAX,EAX
004F19EC  5D                        POP EBP
004F19ED  C2 10 00                  RET 0x10
LAB_004f19f0:
004F19F0  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004F19F3  84 C0                     TEST AL,AL
004F19F5  0F 84 BB 00 00 00         JZ 0x004f1ab6
004F19FB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F19FE  25 FF 00 00 00            AND EAX,0xff
004F1A03  48                        DEC EAX
004F1A04  83 F8 04                  CMP EAX,0x4
004F1A07  0F 87 8E 00 00 00         JA 0x004f1a9b
switchD_004f1a0d::switchD:
004F1A0D  FF 24 85 C0 1B 4F 00      JMP dword ptr [EAX*0x4 + 0x4f1bc0]
switchD_004f1a0d::caseD_1:
004F1A14  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F1A17  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1A1A  B8 01 00 00 00            MOV EAX,0x1
004F1A1F  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
004F1A25  C7 02 5A 00 00 00         MOV dword ptr [EDX],0x5a
004F1A2B  5D                        POP EBP
004F1A2C  C2 10 00                  RET 0x10
switchD_004f1a0d::caseD_2:
004F1A2F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F1A32  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1A35  C7 00 52 00 00 00         MOV dword ptr [EAX],0x52
004F1A3B  C7 01 09 00 00 00         MOV dword ptr [ECX],0x9
004F1A41  B8 01 00 00 00            MOV EAX,0x1
004F1A46  5D                        POP EBP
004F1A47  C2 10 00                  RET 0x10
switchD_004f1a0d::caseD_3:
004F1A4A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F1A4D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F1A50  C7 02 52 00 00 00         MOV dword ptr [EDX],0x52
004F1A56  C7 00 5A 00 00 00         MOV dword ptr [EAX],0x5a
004F1A5C  B8 01 00 00 00            MOV EAX,0x1
004F1A61  5D                        POP EBP
004F1A62  C2 10 00                  RET 0x10
switchD_004f1a0d::caseD_4:
004F1A65  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F1A68  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1A6B  B8 01 00 00 00            MOV EAX,0x1
004F1A70  C7 01 A1 00 00 00         MOV dword ptr [ECX],0xa1
004F1A76  C7 02 09 00 00 00         MOV dword ptr [EDX],0x9
004F1A7C  5D                        POP EBP
004F1A7D  C2 10 00                  RET 0x10
switchD_004f1a0d::caseD_5:
004F1A80  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F1A83  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1A86  C7 00 A1 00 00 00         MOV dword ptr [EAX],0xa1
004F1A8C  C7 01 5A 00 00 00         MOV dword ptr [ECX],0x5a
004F1A92  B8 01 00 00 00            MOV EAX,0x1
004F1A97  5D                        POP EBP
004F1A98  C2 10 00                  RET 0x10
switchD_004f1a0d::default:
004F1A9B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F1A9E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F1AA1  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
004F1AA7  C7 00 09 00 00 00         MOV dword ptr [EAX],0x9
004F1AAD  B8 01 00 00 00            MOV EAX,0x1
004F1AB2  5D                        POP EBP
004F1AB3  C2 10 00                  RET 0x10
LAB_004f1ab6:
004F1AB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004F1AB9  81 E1 FF 00 00 00         AND ECX,0xff
004F1ABF  8D 41 FF                  LEA EAX,[ECX + -0x1]
004F1AC2  83 F8 04                  CMP EAX,0x4
004F1AC5  0F 87 8E 00 00 00         JA 0x004f1b59
switchD_004f1acb::switchD:
004F1ACB  FF 24 85 D4 1B 4F 00      JMP dword ptr [EAX*0x4 + 0x4f1bd4]
switchD_004f1acb::caseD_1:
004F1AD2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F1AD5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F1AD8  C7 02 A2 00 00 00         MOV dword ptr [EDX],0xa2
004F1ADE  C7 00 5A 00 00 00         MOV dword ptr [EAX],0x5a
004F1AE4  B8 01 00 00 00            MOV EAX,0x1
004F1AE9  5D                        POP EBP
004F1AEA  C2 10 00                  RET 0x10
switchD_004f1acb::caseD_2:
004F1AED  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F1AF0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1AF3  B8 01 00 00 00            MOV EAX,0x1
004F1AF8  C7 01 53 00 00 00         MOV dword ptr [ECX],0x53
004F1AFE  C7 02 09 00 00 00         MOV dword ptr [EDX],0x9
004F1B04  5D                        POP EBP
004F1B05  C2 10 00                  RET 0x10
switchD_004f1acb::caseD_3:
004F1B08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F1B0B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1B0E  C7 00 53 00 00 00         MOV dword ptr [EAX],0x53
004F1B14  C7 01 5A 00 00 00         MOV dword ptr [ECX],0x5a
004F1B1A  B8 01 00 00 00            MOV EAX,0x1
004F1B1F  5D                        POP EBP
004F1B20  C2 10 00                  RET 0x10
switchD_004f1acb::caseD_4:
004F1B23  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F1B26  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F1B29  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
004F1B2F  C7 00 09 00 00 00         MOV dword ptr [EAX],0x9
004F1B35  B8 01 00 00 00            MOV EAX,0x1
004F1B3A  5D                        POP EBP
004F1B3B  C2 10 00                  RET 0x10
switchD_004f1acb::caseD_5:
004F1B3E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F1B41  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1B44  B8 01 00 00 00            MOV EAX,0x1
004F1B49  C7 01 04 00 00 00         MOV dword ptr [ECX],0x4
004F1B4F  C7 02 5A 00 00 00         MOV dword ptr [EDX],0x5a
004F1B55  5D                        POP EBP
004F1B56  C2 10 00                  RET 0x10
switchD_004f1acb::default:
004F1B59  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F1B5C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1B5F  C7 00 A2 00 00 00         MOV dword ptr [EAX],0xa2
004F1B65  C7 01 09 00 00 00         MOV dword ptr [ECX],0x9
004F1B6B  B8 01 00 00 00            MOV EAX,0x1
004F1B70  5D                        POP EBP
004F1B71  C2 10 00                  RET 0x10
LAB_004f1b74:
004F1B74  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F1B77  3C 01                     CMP AL,0x1
004F1B79  76 06                     JBE 0x004f1b81
004F1B7B  33 C0                     XOR EAX,EAX
004F1B7D  5D                        POP EBP
004F1B7E  C2 10 00                  RET 0x10
LAB_004f1b81:
004F1B81  25 FF 00 00 00            AND EAX,0xff
004F1B86  48                        DEC EAX
004F1B87  74 1B                     JZ 0x004f1ba4
004F1B89  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F1B8C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F1B8F  C7 02 12 00 00 00         MOV dword ptr [EDX],0x12
004F1B95  C7 00 0A 00 00 00         MOV dword ptr [EAX],0xa
004F1B9B  B8 01 00 00 00            MOV EAX,0x1
004F1BA0  5D                        POP EBP
004F1BA1  C2 10 00                  RET 0x10
LAB_004f1ba4:
004F1BA4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F1BA7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1BAA  B8 01 00 00 00            MOV EAX,0x1
004F1BAF  C7 01 12 00 00 00         MOV dword ptr [ECX],0x12
004F1BB5  C7 02 5B 00 00 00         MOV dword ptr [EDX],0x5b
004F1BBB  5D                        POP EBP
004F1BBC  C2 10 00                  RET 0x10
