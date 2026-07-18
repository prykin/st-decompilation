FUN_0070c9e0:
0070C9E0  55                        PUSH EBP
0070C9E1  8B EC                     MOV EBP,ESP
0070C9E3  83 EC 14                  SUB ESP,0x14
0070C9E6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070C9E9  53                        PUSH EBX
0070C9EA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0070C9ED  56                        PUSH ESI
0070C9EE  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070C9F1  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070C9F4  8B D0                     MOV EDX,EAX
0070C9F6  57                        PUSH EDI
0070C9F7  81 E2 07 00 00 80         AND EDX,0x80000007
0070C9FD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070CA00  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070CA03  C6 45 EC 80               MOV byte ptr [EBP + -0x14],0x80
0070CA07  C6 45 ED 40               MOV byte ptr [EBP + -0x13],0x40
0070CA0B  C6 45 EE 20               MOV byte ptr [EBP + -0x12],0x20
0070CA0F  C6 45 EF 10               MOV byte ptr [EBP + -0x11],0x10
0070CA13  C6 45 F0 08               MOV byte ptr [EBP + -0x10],0x8
0070CA17  C6 45 F1 04               MOV byte ptr [EBP + -0xf],0x4
0070CA1B  C6 45 F2 02               MOV byte ptr [EBP + -0xe],0x2
0070CA1F  C6 45 F3 01               MOV byte ptr [EBP + -0xd],0x1
0070CA23  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
0070CA29  79 05                     JNS 0x0070ca30
0070CA2B  4A                        DEC EDX
0070CA2C  83 CA F8                  OR EDX,0xfffffff8
0070CA2F  42                        INC EDX
LAB_0070ca30:
0070CA30  75 0E                     JNZ 0x0070ca40
0070CA32  99                        CDQ
0070CA33  83 E2 07                  AND EDX,0x7
0070CA36  03 C2                     ADD EAX,EDX
0070CA38  C1 F8 03                  SAR EAX,0x3
0070CA3B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0070CA3E  EB 0F                     JMP 0x0070ca4f
LAB_0070ca40:
0070CA40  83 C0 08                  ADD EAX,0x8
0070CA43  99                        CDQ
0070CA44  83 E2 07                  AND EDX,0x7
0070CA47  03 C2                     ADD EAX,EDX
0070CA49  C1 F8 03                  SAR EAX,0x3
0070CA4C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0070ca4f:
0070CA4F  8B F0                     MOV ESI,EAX
0070CA51  0F AF F1                  IMUL ESI,ECX
0070CA54  56                        PUSH ESI
0070CA55  E8 B6 E1 F9 FF            CALL 0x006aac10
0070CA5A  8B F8                     MOV EDI,EAX
0070CA5C  85 FF                     TEST EDI,EDI
0070CA5E  75 07                     JNZ 0x0070ca67
0070CA60  5F                        POP EDI
0070CA61  5E                        POP ESI
0070CA62  5B                        POP EBX
0070CA63  8B E5                     MOV ESP,EBP
0070CA65  5D                        POP EBP
0070CA66  C3                        RET
LAB_0070ca67:
0070CA67  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070CA6A  89 33                     MOV dword ptr [EBX],ESI
0070CA6C  33 DB                     XOR EBX,EBX
0070CA6E  85 C0                     TEST EAX,EAX
0070CA70  7E 67                     JLE 0x0070cad9
0070CA72  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0070ca75:
0070CA75  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070CA78  33 F6                     XOR ESI,ESI
0070CA7A  85 C0                     TEST EAX,EAX
0070CA7C  7E 48                     JLE 0x0070cac6
LAB_0070ca7e:
0070CA7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070CA81  53                        PUSH EBX
0070CA82  56                        PUSH ESI
0070CA83  50                        PUSH EAX
0070CA84  E8 17 FF FF FF            CALL 0x0070c9a0
0070CA89  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
0070CA8C  83 C4 0C                  ADD ESP,0xc
0070CA8F  3A C1                     CMP AL,CL
0070CA91  74 2B                     JZ 0x0070cabe
0070CA93  8B C6                     MOV EAX,ESI
0070CA95  8B CE                     MOV ECX,ESI
0070CA97  99                        CDQ
0070CA98  83 E2 07                  AND EDX,0x7
0070CA9B  03 C2                     ADD EAX,EDX
0070CA9D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070CAA0  C1 F8 03                  SAR EAX,0x3
0070CAA3  03 C2                     ADD EAX,EDX
0070CAA5  81 E1 07 00 00 80         AND ECX,0x80000007
0070CAAB  79 05                     JNS 0x0070cab2
0070CAAD  49                        DEC ECX
0070CAAE  83 C9 F8                  OR ECX,0xfffffff8
0070CAB1  41                        INC ECX
LAB_0070cab2:
0070CAB2  8A 54 0D EC               MOV DL,byte ptr [EBP + ECX*0x1 + -0x14]
0070CAB6  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
0070CAB9  0A CA                     OR CL,DL
0070CABB  88 0C 38                  MOV byte ptr [EAX + EDI*0x1],CL
LAB_0070cabe:
0070CABE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070CAC1  46                        INC ESI
0070CAC2  3B F0                     CMP ESI,EAX
0070CAC4  7C B8                     JL 0x0070ca7e
LAB_0070cac6:
0070CAC6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070CAC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070CACC  03 C8                     ADD ECX,EAX
0070CACE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070CAD1  43                        INC EBX
0070CAD2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070CAD5  3B D8                     CMP EBX,EAX
0070CAD7  7C 9C                     JL 0x0070ca75
LAB_0070cad9:
0070CAD9  8B C7                     MOV EAX,EDI
0070CADB  5F                        POP EDI
0070CADC  5E                        POP ESI
0070CADD  5B                        POP EBX
0070CADE  8B E5                     MOV ESP,EBP
0070CAE0  5D                        POP EBP
0070CAE1  C3                        RET
