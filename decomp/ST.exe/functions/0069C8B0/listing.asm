FUN_0069c8b0:
0069C8B0  55                        PUSH EBP
0069C8B1  8B EC                     MOV EBP,ESP
0069C8B3  83 EC 64                  SUB ESP,0x64
0069C8B6  53                        PUSH EBX
0069C8B7  56                        PUSH ESI
0069C8B8  57                        PUSH EDI
0069C8B9  6A 0A                     PUSH 0xa
0069C8BB  6A 10                     PUSH 0x10
0069C8BD  33 F6                     XOR ESI,ESI
0069C8BF  6A 0A                     PUSH 0xa
0069C8C1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069C8C4  56                        PUSH ESI
0069C8C5  E8 C6 19 01 00            CALL 0x006ae290
0069C8CA  8B D8                     MOV EBX,EAX
0069C8CC  3B DE                     CMP EBX,ESI
0069C8CE  0F 84 E1 01 00 00         JZ 0x0069cab5
0069C8D4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069C8D7  3B FE                     CMP EDI,ESI
0069C8D9  0F 84 D6 01 00 00         JZ 0x0069cab5
0069C8DF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069C8E2  3B D6                     CMP EDX,ESI
0069C8E4  0F 8E CB 01 00 00         JLE 0x0069cab5
0069C8EA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C8ED  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0069C8F0  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069C8F3  8D 77 02                  LEA ESI,[EDI + 0x2]
0069C8F6  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069C8FD  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0069C900  2B C8                     SUB ECX,EAX
0069C902  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0069C905  D1 E1                     SHL ECX,0x1
0069C907  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_0069c90a:
0069C90A  85 C0                     TEST EAX,EAX
0069C90C  0F 8E 7E 01 00 00         JLE 0x0069ca90
0069C912  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069C915  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069C918  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0069C91B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069C91E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0069C921  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0069C924  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0069c927:
0069C927  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0069C92A  6A 00                     PUSH 0x0
0069C92C  83 CE FF                  OR ESI,0xffffffff
0069C92F  8B 0A                     MOV ECX,dword ptr [EDX]
0069C931  8D 55 9C                  LEA EDX,[EBP + -0x64]
0069C934  52                        PUSH EDX
0069C935  50                        PUSH EAX
0069C936  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069C939  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0069C93C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069C93F  50                        PUSH EAX
0069C940  E8 3C 93 D6 FF            CALL 0x00405c81
0069C945  85 C0                     TEST EAX,EAX
0069C947  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0069C94A  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0069C951  0F 8E AC 00 00 00         JLE 0x0069ca03
0069C957  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0069C95A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0069c95d:
0069C95D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069C960  8B 02                     MOV EAX,dword ptr [EDX]
0069C962  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069C969  2B C8                     SUB ECX,EAX
0069C96B  8B 44 4F 0A               MOV EAX,dword ptr [EDI + ECX*0x2 + 0xa]
0069C96F  85 C0                     TEST EAX,EAX
0069C971  8D 0C 4F                  LEA ECX,[EDI + ECX*0x2]
0069C974  0F 8C 85 00 00 00         JL 0x0069c9ff
0069C97A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0069C97D  39 51 02                  CMP dword ptr [ECX + 0x2],EDX
0069C980  75 3C                     JNZ 0x0069c9be
0069C982  83 FE FF                  CMP ESI,-0x1
0069C985  75 33                     JNZ 0x0069c9ba
0069C987  8B F0                     MOV ESI,EAX
0069C989  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0069C98C  3B F0                     CMP ESI,EAX
0069C98E  73 2E                     JNC 0x0069c9be
0069C990  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069C993  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0069C996  0F AF C6                  IMUL EAX,ESI
0069C999  03 C2                     ADD EAX,EDX
0069C99B  85 C0                     TEST EAX,EAX
0069C99D  74 1F                     JZ 0x0069c9be
0069C99F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069C9A2  50                        PUSH EAX
0069C9A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069C9A6  50                        PUSH EAX
0069C9A7  57                        PUSH EDI
0069C9A8  E8 33 61 D6 FF            CALL 0x00402ae0
0069C9AD  85 C0                     TEST EAX,EAX
0069C9AF  7C 0D                     JL 0x0069c9be
0069C9B1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069C9B4  89 74 39 0A               MOV dword ptr [ECX + EDI*0x1 + 0xa],ESI
0069C9B8  EB 04                     JMP 0x0069c9be
LAB_0069c9ba:
0069C9BA  3B F0                     CMP ESI,EAX
0069C9BC  75 19                     JNZ 0x0069c9d7
LAB_0069c9be:
0069C9BE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069C9C1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069C9C4  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0069C9C7  40                        INC EAX
0069C9C8  83 C2 04                  ADD EDX,0x4
0069C9CB  3B C1                     CMP EAX,ECX
0069C9CD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069C9D0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069C9D3  7C 88                     JL 0x0069c95d
0069C9D5  EB 28                     JMP 0x0069c9ff
LAB_0069c9d7:
0069C9D7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069C9DA  8B 44 95 9C               MOV EAX,dword ptr [EBP + EDX*0x4 + -0x64]
0069C9DE  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069C9E5  2B C8                     SUB ECX,EAX
0069C9E7  8B 44 4F 0A               MOV EAX,dword ptr [EDI + ECX*0x2 + 0xa]
0069C9EB  3B F0                     CMP ESI,EAX
0069C9ED  7E 04                     JLE 0x0069c9f3
0069C9EF  56                        PUSH ESI
0069C9F0  50                        PUSH EAX
0069C9F1  EB 02                     JMP 0x0069c9f5
LAB_0069c9f3:
0069C9F3  50                        PUSH EAX
0069C9F4  56                        PUSH ESI
LAB_0069c9f5:
0069C9F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069C9F8  57                        PUSH EDI
0069C9F9  53                        PUSH EBX
0069C9FA  E8 EC 91 D6 FF            CALL 0x00405beb
LAB_0069c9ff:
0069C9FF  85 F6                     TEST ESI,ESI
0069CA01  7D 5E                     JGE 0x0069ca61
LAB_0069ca03:
0069CA03  33 D2                     XOR EDX,EDX
0069CA05  6A 0A                     PUSH 0xa
0069CA07  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0069CA0A  6A 04                     PUSH 0x4
0069CA0C  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0069CA0F  6A 0A                     PUSH 0xa
0069CA11  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0069CA14  52                        PUSH EDX
0069CA15  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0069CA18  E8 73 18 01 00            CALL 0x006ae290
0069CA1D  8D 4D C0                  LEA ECX,[EBP + -0x40]
0069CA20  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0069CA23  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069CA26  51                        PUSH ECX
0069CA27  53                        PUSH EBX
0069CA28  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0069CA2B  E8 90 17 01 00            CALL 0x006ae1c0
0069CA30  8B F0                     MOV ESI,EAX
0069CA32  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0069CA35  3B F0                     CMP ESI,EAX
0069CA37  73 0D                     JNC 0x0069ca46
0069CA39  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069CA3C  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0069CA3F  0F AF C6                  IMUL EAX,ESI
0069CA42  03 C1                     ADD EAX,ECX
0069CA44  EB 02                     JMP 0x0069ca48
LAB_0069ca46:
0069CA46  33 C0                     XOR EAX,EAX
LAB_0069ca48:
0069CA48  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069CA4B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069CA4E  50                        PUSH EAX
0069CA4F  52                        PUSH EDX
0069CA50  57                        PUSH EDI
0069CA51  E8 8A 60 D6 FF            CALL 0x00402ae0
0069CA56  85 C0                     TEST EAX,EAX
0069CA58  7C 07                     JL 0x0069ca61
0069CA5A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069CA5D  89 74 38 0A               MOV dword ptr [EAX + EDI*0x1 + 0xa],ESI
LAB_0069ca61:
0069CA61  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0069CA64  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0069CA67  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069CA6A  B8 0E 00 00 00            MOV EAX,0xe
0069CA6F  03 F0                     ADD ESI,EAX
0069CA71  03 D0                     ADD EDX,EAX
0069CA73  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069CA76  41                        INC ECX
0069CA77  48                        DEC EAX
0069CA78  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0069CA7B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069CA7E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069CA81  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0069CA84  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0069CA87  0F 85 9A FE FF FF         JNZ 0x0069c927
0069CA8D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_0069ca90:
0069CA90  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0069CA93  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069CA96  03 F0                     ADD ESI,EAX
0069CA98  03 D1                     ADD EDX,ECX
0069CA9A  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0069CA9D  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0069CAA0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0069CAA3  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0069CAA6  03 F1                     ADD ESI,ECX
0069CAA8  4A                        DEC EDX
0069CAA9  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0069CAAC  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0069CAAF  0F 85 55 FE FF FF         JNZ 0x0069c90a
LAB_0069cab5:
0069CAB5  5F                        POP EDI
0069CAB6  8B C3                     MOV EAX,EBX
0069CAB8  5E                        POP ESI
0069CAB9  5B                        POP EBX
0069CABA  8B E5                     MOV ESP,EBP
0069CABC  5D                        POP EBP
0069CABD  C2 0C 00                  RET 0xc
