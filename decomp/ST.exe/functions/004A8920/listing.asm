OpticClassC::GetMessage:
004A8920  55                        PUSH EBP
004A8921  8B EC                     MOV EBP,ESP
004A8923  83 EC 68                  SUB ESP,0x68
004A8926  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A892B  53                        PUSH EBX
004A892C  56                        PUSH ESI
004A892D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A8930  33 DB                     XOR EBX,EBX
004A8932  57                        PUSH EDI
004A8933  8D 55 9C                  LEA EDX,[EBP + -0x64]
004A8936  8D 4D 98                  LEA ECX,[EBP + -0x68]
004A8939  53                        PUSH EBX
004A893A  52                        PUSH EDX
004A893B  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004A893E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A8944  E8 A7 4E 28 00            CALL 0x0072d7f0
004A8949  83 C4 08                  ADD ESP,0x8
004A894C  3B C3                     CMP EAX,EBX
004A894E  0F 85 34 03 00 00         JNZ 0x004a8c88
004A8954  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004A8957  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004A895A  57                        PUSH EDI
004A895B  8B CE                     MOV ECX,ESI
004A895D  E8 6E D6 23 00            CALL 0x006e5fd0
004A8962  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004A8965  3D 04 01 00 00            CMP EAX,0x104
004A896A  0F 87 FB 01 00 00         JA 0x004a8b6b
004A8970  0F 84 86 01 00 00         JZ 0x004a8afc
004A8976  BF 03 00 00 00            MOV EDI,0x3
004A897B  3B C7                     CMP EAX,EDI
004A897D  0F 87 2F 01 00 00         JA 0x004a8ab2
004A8983  0F 84 0A 01 00 00         JZ 0x004a8a93
004A8989  2B C3                     SUB EAX,EBX
004A898B  74 24                     JZ 0x004a89b1
004A898D  83 E8 02                  SUB EAX,0x2
004A8990  0F 85 DE 02 00 00         JNZ 0x004a8c74
004A8996  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004A899C  E8 BD 9B F5 FF            CALL 0x0040255e
004A89A1  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004A89A7  E8 11 B0 F5 FF            CALL 0x004039bd
004A89AC  E9 96 01 00 00            JMP 0x004a8b47
LAB_004a89b1:
004A89B1  A1 E0 73 80 00            MOV EAX,[0x008073e0]
004A89B6  BF 01 00 00 00            MOV EDI,0x1
004A89BB  3B C7                     CMP EAX,EDI
004A89BD  75 07                     JNZ 0x004a89c6
004A89BF  8B CE                     MOV ECX,ESI
004A89C1  E8 C0 87 F5 FF            CALL 0x00401186
LAB_004a89c6:
004A89C6  83 3D 4C 67 80 00 02      CMP dword ptr [0x0080674c],0x2
004A89CD  0F 85 A1 02 00 00         JNZ 0x004a8c74
004A89D3  39 3D 3C 67 80 00         CMP dword ptr [0x0080673c],EDI
004A89D9  0F 8F 95 02 00 00         JG 0x004a8c74
004A89DF  39 1D 5D 74 80 00         CMP dword ptr [0x0080745d],EBX
004A89E5  75 3B                     JNZ 0x004a8a22
004A89E7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A89ED  E8 EE 51 23 00            CALL 0x006ddbe0
004A89F2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A89F8  E8 53 86 23 00            CALL 0x006e1050
LAB_004a89fd:
004A89FD  A1 5D 74 80 00            MOV EAX,[0x0080745d]
004A8A02  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004A8A05  40                        INC EAX
004A8A06  89 3D 4C 67 80 00         MOV dword ptr [0x0080674c],EDI
004A8A0C  A3 5D 74 80 00            MOV [0x0080745d],EAX
004A8A11  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A8A17  33 C0                     XOR EAX,EAX
004A8A19  5F                        POP EDI
004A8A1A  5E                        POP ESI
004A8A1B  5B                        POP EBX
004A8A1C  8B E5                     MOV ESP,EBP
004A8A1E  5D                        POP EBP
004A8A1F  C2 04 00                  RET 0x4
LAB_004a8a22:
004A8A22  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A8A28  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A8A2E  83 EC 08                  SUB ESP,0x8
004A8A31  DD 1C 24                  FSTP double ptr [ESP]
004A8A34  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
004A8A3A  83 EC 08                  SUB ESP,0x8
004A8A3D  DD 1C 24                  FSTP double ptr [ESP]
004A8A40  E8 1B 8A 23 00            CALL 0x006e1460
004A8A45  A1 98 75 80 00            MOV EAX,[0x00807598]
004A8A4A  DD 80 98 00 00 00         FLD double ptr [EAX + 0x98]
004A8A50  D9 1D D0 73 80 00         FSTP float ptr [0x008073d0]
004A8A56  DD 80 A0 00 00 00         FLD double ptr [EAX + 0xa0]
004A8A5C  D9 1D D4 73 80 00         FSTP float ptr [0x008073d4]
004A8A62  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
004A8A68  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A8A6E  E8 15 58 28 00            CALL 0x0072e288
004A8A73  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A8A79  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A8A7F  A3 D8 73 80 00            MOV [0x008073d8],EAX
004A8A84  E8 FF 57 28 00            CALL 0x0072e288
004A8A89  A3 DC 73 80 00            MOV [0x008073dc],EAX
004A8A8E  E9 6A FF FF FF            JMP 0x004a89fd
LAB_004a8a93:
004A8A93  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004A8A99  E8 73 B5 F5 FF            CALL 0x00404011
004A8A9E  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004A8AA1  33 C0                     XOR EAX,EAX
004A8AA3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A8AA9  5F                        POP EDI
004A8AAA  5E                        POP ESI
004A8AAB  5B                        POP EBX
004A8AAC  8B E5                     MOV ESP,EBP
004A8AAE  5D                        POP EBP
004A8AAF  C2 04 00                  RET 0x4
LAB_004a8ab2:
004A8AB2  2D 00 01 00 00            SUB EAX,0x100
004A8AB7  74 15                     JZ 0x004a8ace
004A8AB9  48                        DEC EAX
004A8ABA  0F 85 B4 01 00 00         JNZ 0x004a8c74
004A8AC0  6A 01                     PUSH 0x1
004A8AC2  8B CE                     MOV ECX,ESI
004A8AC4  E8 7E B1 F5 FF            CALL 0x00403c47
004A8AC9  E9 7B 01 00 00            JMP 0x004a8c49
LAB_004a8ace:
004A8ACE  53                        PUSH EBX
004A8ACF  8B CE                     MOV ECX,ESI
004A8AD1  E8 71 B1 F5 FF            CALL 0x00403c47
004A8AD6  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
004A8ADC  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8AE1  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
004A8AE7  81 E2 FF 00 00 00         AND EDX,0xff
004A8AED  52                        PUSH EDX
004A8AEE  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
004A8AF4  50                        PUSH EAX
004A8AF5  51                        PUSH ECX
004A8AF6  52                        PUSH EDX
004A8AF7  E9 6E 01 00 00            JMP 0x004a8c6a
LAB_004a8afc:
004A8AFC  39 1D FC 73 80 00         CMP dword ptr [0x008073fc],EBX
004A8B02  0F 84 6C 01 00 00         JZ 0x004a8c74
004A8B08  6A 01                     PUSH 0x1
004A8B0A  8B CE                     MOV ECX,ESI
004A8B0C  89 1D FC 73 80 00         MOV dword ptr [0x008073fc],EBX
004A8B12  E8 30 CA F5 FF            CALL 0x00405547
004A8B17  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A8B1D  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004A8B27  89 1D 5D 74 80 00         MOV dword ptr [0x0080745d],EBX
004A8B2D  C7 45 E8 0F 00 00 00      MOV dword ptr [EBP + -0x18],0xf
004A8B34  C7 45 EC 08 01 00 00      MOV dword ptr [EBP + -0x14],0x108
004A8B3B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004A8B3E  8B 01                     MOV EAX,dword ptr [ECX]
004A8B40  8D 55 DC                  LEA EDX,[EBP + -0x24]
004A8B43  52                        PUSH EDX
004A8B44  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_004a8b47:
004A8B47  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004A8B4C  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004A8B52  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004A8B58  25 FF 00 00 00            AND EAX,0xff
004A8B5D  50                        PUSH EAX
004A8B5E  A1 D8 73 80 00            MOV EAX,[0x008073d8]
004A8B63  51                        PUSH ECX
004A8B64  52                        PUSH EDX
004A8B65  50                        PUSH EAX
004A8B66  E9 FF 00 00 00            JMP 0x004a8c6a
LAB_004a8b6b:
004A8B6B  05 FB FE FF FF            ADD EAX,0xfffffefb
004A8B70  83 F8 0A                  CMP EAX,0xa
004A8B73  0F 87 FB 00 00 00         JA 0x004a8c74
004A8B79  33 C9                     XOR ECX,ECX
004A8B7B  8A 88 E8 8C 4A 00         MOV CL,byte ptr [EAX + 0x4a8ce8]
switchD_004a8b81::switchD:
004A8B81  FF 24 8D D4 8C 4A 00      JMP dword ptr [ECX*0x4 + 0x4a8cd4]
switchD_004a8b81::caseD_10f:
004A8B88  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A8B8E  6A 0C                     PUSH 0xc
004A8B90  68 8F 01 00 00            PUSH 0x18f
004A8B95  68 D0 73 80 00            PUSH 0x8073d0
004A8B9A  68 D4 C5 7A 00            PUSH 0x7ac5d4
004A8B9F  E8 D4 84 F5 FF            CALL 0x00401078
004A8BA4  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004A8BA7  33 C0                     XOR EAX,EAX
004A8BA9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A8BAF  5F                        POP EDI
004A8BB0  5E                        POP ESI
004A8BB1  5B                        POP EBX
004A8BB2  8B E5                     MOV ESP,EBP
004A8BB4  5D                        POP EBP
004A8BB5  C2 04 00                  RET 0x4
switchD_004a8b81::caseD_105:
004A8BB8  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8BBD  BF 01 00 00 00            MOV EDI,0x1
004A8BC2  3B C7                     CMP EAX,EDI
004A8BC4  0F 84 AA 00 00 00         JZ 0x004a8c74
004A8BCA  89 3D FC 73 80 00         MOV dword ptr [0x008073fc],EDI
004A8BD0  57                        PUSH EDI
004A8BD1  EB 3F                     JMP 0x004a8c12
switchD_004a8b81::caseD_106:
004A8BD3  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8BD8  BF 02 00 00 00            MOV EDI,0x2
004A8BDD  3B C7                     CMP EAX,EDI
004A8BDF  0F 84 8F 00 00 00         JZ 0x004a8c74
004A8BE5  6A 01                     PUSH 0x1
004A8BE7  8B CE                     MOV ECX,ESI
004A8BE9  89 3D FC 73 80 00         MOV dword ptr [0x008073fc],EDI
004A8BEF  E8 53 C9 F5 FF            CALL 0x00405547
004A8BF4  89 3D 4C 67 80 00         MOV dword ptr [0x0080674c],EDI
004A8BFA  EB 27                     JMP 0x004a8c23
switchD_004a8b81::caseD_107:
004A8BFC  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8C01  BF 03 00 00 00            MOV EDI,0x3
004A8C06  3B C7                     CMP EAX,EDI
004A8C08  74 6A                     JZ 0x004a8c74
004A8C0A  89 3D FC 73 80 00         MOV dword ptr [0x008073fc],EDI
004A8C10  6A 01                     PUSH 0x1
LAB_004a8c12:
004A8C12  8B CE                     MOV ECX,ESI
004A8C14  E8 2E C9 F5 FF            CALL 0x00405547
004A8C19  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
LAB_004a8c23:
004A8C23  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A8C29  89 1D 5D 74 80 00         MOV dword ptr [0x0080745d],EBX
004A8C2F  C7 45 E8 0F 00 00 00      MOV dword ptr [EBP + -0x18],0xf
004A8C36  C7 45 EC 08 01 00 00      MOV dword ptr [EBP + -0x14],0x108
004A8C3D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004A8C40  8B 11                     MOV EDX,dword ptr [ECX]
004A8C42  8D 45 DC                  LEA EAX,[EBP + -0x24]
004A8C45  50                        PUSH EAX
004A8C46  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_004a8c49:
004A8C49  8B 0D 3C 74 80 00         MOV ECX,dword ptr [0x0080743c]
004A8C4F  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
004A8C55  A1 DC 73 80 00            MOV EAX,[0x008073dc]
004A8C5A  81 E1 FF 00 00 00         AND ECX,0xff
004A8C60  51                        PUSH ECX
004A8C61  8B 0D D8 73 80 00         MOV ECX,dword ptr [0x008073d8]
004A8C67  52                        PUSH EDX
004A8C68  50                        PUSH EAX
004A8C69  51                        PUSH ECX
LAB_004a8c6a:
004A8C6A  B9 58 76 80 00            MOV ECX,0x807658
004A8C6F  E8 60 AA F5 FF            CALL 0x004036d4
switchD_004a8b81::caseD_108:
004A8C74  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004A8C77  33 C0                     XOR EAX,EAX
004A8C79  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A8C7F  5F                        POP EDI
004A8C80  5E                        POP ESI
004A8C81  5B                        POP EBX
004A8C82  8B E5                     MOV ESP,EBP
004A8C84  5D                        POP EBP
004A8C85  C2 04 00                  RET 0x4
LAB_004a8c88:
004A8C88  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004A8C8B  68 B8 C5 7A 00            PUSH 0x7ac5b8
004A8C90  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A8C95  6A FF                     PUSH -0x1
004A8C97  53                        PUSH EBX
004A8C98  68 A9 00 00 00            PUSH 0xa9
004A8C9D  68 94 C5 7A 00            PUSH 0x7ac594
004A8CA2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A8CA7  E8 24 48 20 00            CALL 0x006ad4d0
004A8CAC  83 C4 18                  ADD ESP,0x18
004A8CAF  85 C0                     TEST EAX,EAX
004A8CB1  74 01                     JZ 0x004a8cb4
004A8CB3  CC                        INT3
LAB_004a8cb4:
004A8CB4  68 AA 00 00 00            PUSH 0xaa
004A8CB9  68 94 C5 7A 00            PUSH 0x7ac594
004A8CBE  53                        PUSH EBX
004A8CBF  6A FF                     PUSH -0x1
004A8CC1  E8 7A D1 1F 00            CALL 0x006a5e40
004A8CC6  5F                        POP EDI
004A8CC7  5E                        POP ESI
004A8CC8  B8 FF FF 00 00            MOV EAX,0xffff
004A8CCD  5B                        POP EBX
004A8CCE  8B E5                     MOV ESP,EBP
004A8CD0  5D                        POP EBP
004A8CD1  C2 04 00                  RET 0x4
