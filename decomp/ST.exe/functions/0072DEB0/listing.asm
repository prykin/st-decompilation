xtoa:
0072DEB0  55                        PUSH EBP
0072DEB1  8B EC                     MOV EBP,ESP
0072DEB3  83 EC 10                  SUB ESP,0x10
0072DEB6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072DEB9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072DEBC  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
0072DEC0  74 17                     JZ 0x0072ded9
0072DEC2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072DEC5  C6 01 2D                  MOV byte ptr [ECX],0x2d
0072DEC8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072DECB  83 C2 01                  ADD EDX,0x1
0072DECE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072DED1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DED4  F7 D8                     NEG EAX
0072DED6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0072ded9:
0072DED9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072DEDC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0072dedf:
0072DEDF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DEE2  33 D2                     XOR EDX,EDX
0072DEE4  F7 75 10                  DIV dword ptr [EBP + 0x10]
0072DEE7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0072DEEA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DEED  33 D2                     XOR EDX,EDX
0072DEEF  F7 75 10                  DIV dword ptr [EBP + 0x10]
0072DEF2  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072DEF5  83 7D F4 09               CMP dword ptr [EBP + -0xc],0x9
0072DEF9  76 16                     JBE 0x0072df11
0072DEFB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072DEFE  83 C2 57                  ADD EDX,0x57
0072DF01  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DF04  88 10                     MOV byte ptr [EAX],DL
0072DF06  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072DF09  83 C1 01                  ADD ECX,0x1
0072DF0C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072DF0F  EB 14                     JMP 0x0072df25
LAB_0072df11:
0072DF11  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072DF14  83 C2 30                  ADD EDX,0x30
0072DF17  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DF1A  88 10                     MOV byte ptr [EAX],DL
0072DF1C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072DF1F  83 C1 01                  ADD ECX,0x1
0072DF22  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0072df25:
0072DF25  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072DF29  77 B4                     JA 0x0072dedf
0072DF2B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072DF2E  C6 02 00                  MOV byte ptr [EDX],0x0
0072DF31  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DF34  83 E8 01                  SUB EAX,0x1
0072DF37  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0072df3a:
0072DF3A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072DF3D  8A 11                     MOV DL,byte ptr [ECX]
0072DF3F  88 55 F0                  MOV byte ptr [EBP + -0x10],DL
0072DF42  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DF45  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072DF48  8A 11                     MOV DL,byte ptr [ECX]
0072DF4A  88 10                     MOV byte ptr [EAX],DL
0072DF4C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072DF4F  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
0072DF52  88 08                     MOV byte ptr [EAX],CL
0072DF54  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072DF57  83 EA 01                  SUB EDX,0x1
0072DF5A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072DF5D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072DF60  83 C0 01                  ADD EAX,0x1
0072DF63  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072DF66  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072DF69  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
0072DF6C  72 CC                     JC 0x0072df3a
0072DF6E  8B E5                     MOV ESP,EBP
0072DF70  5D                        POP EBP
0072DF71  C3                        RET
