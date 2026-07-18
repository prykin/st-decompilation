STGroupBoatC::GrpRepare:
0049D750  55                        PUSH EBP
0049D751  8B EC                     MOV EBP,ESP
0049D753  83 EC 54                  SUB ESP,0x54
0049D756  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0049D75B  53                        PUSH EBX
0049D75C  56                        PUSH ESI
0049D75D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049D760  33 DB                     XOR EBX,EBX
0049D762  57                        PUSH EDI
0049D763  8D 55 B0                  LEA EDX,[EBP + -0x50]
0049D766  8D 4D AC                  LEA ECX,[EBP + -0x54]
0049D769  53                        PUSH EBX
0049D76A  52                        PUSH EDX
0049D76B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0049D76E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049D774  E8 77 00 29 00            CALL 0x0072d7f0
0049D779  8B F0                     MOV ESI,EAX
0049D77B  83 C4 08                  ADD ESP,0x8
0049D77E  3B F3                     CMP ESI,EBX
0049D780  0F 85 5F 02 00 00         JNZ 0x0049d9e5
0049D786  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049D789  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049D78C  83 F8 01                  CMP EAX,0x1
0049D78F  74 08                     JZ 0x0049d799
0049D791  3B C3                     CMP EAX,EBX
0049D793  0F 85 80 01 00 00         JNZ 0x0049d919
LAB_0049d799:
0049D799  B9 15 00 00 00            MOV ECX,0x15
0049D79E  33 C0                     XOR EAX,EAX
0049D7A0  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049D7A6  F3 AB                     STOSD.REP ES:EDI
0049D7A8  8B 86 9F 02 00 00         MOV EAX,dword ptr [ESI + 0x29f]
0049D7AE  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049D7B1  3B C3                     CMP EAX,EBX
0049D7B3  74 06                     JZ 0x0049d7bb
0049D7B5  50                        PUSH EAX
0049D7B6  E8 55 09 21 00            CALL 0x006ae110
LAB_0049d7bb:
0049D7BB  8D 86 9B 02 00 00         LEA EAX,[ESI + 0x29b]
0049D7C1  8D 8E 5C 01 00 00         LEA ECX,[ESI + 0x15c]
0049D7C7  8B D0                     MOV EDX,EAX
0049D7C9  8B 39                     MOV EDI,dword ptr [ECX]
0049D7CB  89 3A                     MOV dword ptr [EDX],EDI
0049D7CD  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0049D7D0  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0049D7D3  8B 08                     MOV ECX,dword ptr [EAX]
0049D7D5  3B CB                     CMP ECX,EBX
0049D7D7  89 9E 9F 02 00 00         MOV dword ptr [ESI + 0x29f],EBX
0049D7DD  0F 85 DE 00 00 00         JNZ 0x0049d8c1
0049D7E3  8B 86 60 01 00 00         MOV EAX,dword ptr [ESI + 0x160]
0049D7E9  3B C3                     CMP EAX,EBX
0049D7EB  74 0C                     JZ 0x0049d7f9
0049D7ED  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0049D7F0  85 DB                     TEST EBX,EBX
0049D7F2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0049D7F5  75 20                     JNZ 0x0049d817
0049D7F7  EB 03                     JMP 0x0049d7fc
LAB_0049d7f9:
0049D7F9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0049d7fc:
0049D7FC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049D802  68 B7 09 00 00            PUSH 0x9b7
0049D807  68 3C BE 7A 00            PUSH 0x7abe3c
0049D80C  52                        PUSH EDX
0049D80D  68 09 00 FE AF            PUSH 0xaffe0009
0049D812  E8 29 86 20 00            CALL 0x006a5e40
LAB_0049d817:
0049D817  6A 01                     PUSH 0x1
0049D819  6A 02                     PUSH 0x2
0049D81B  6A 00                     PUSH 0x0
0049D81D  6A 00                     PUSH 0x0
0049D81F  E8 6C 0A 21 00            CALL 0x006ae290
0049D824  33 FF                     XOR EDI,EDI
0049D826  89 86 9F 02 00 00         MOV dword ptr [ESI + 0x29f],EAX
0049D82C  85 DB                     TEST EBX,EBX
0049D82E  7E 51                     JLE 0x0049d881
LAB_0049d830:
0049D830  8B 8E 60 01 00 00         MOV ECX,dword ptr [ESI + 0x160]
0049D836  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D839  50                        PUSH EAX
0049D83A  8B D7                     MOV EDX,EDI
0049D83C  E8 2F F4 20 00            CALL 0x006acc70
0049D841  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049D844  66 3D FF FF               CMP AX,0xffff
0049D848  74 32                     JZ 0x0049d87c
0049D84A  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049D84D  6A 01                     PUSH 0x1
0049D84F  50                        PUSH EAX
0049D850  51                        PUSH ECX
0049D851  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D857  E8 5E 50 F6 FF            CALL 0x004028ba
0049D85C  85 C0                     TEST EAX,EAX
0049D85E  74 1C                     JZ 0x0049d87c
0049D860  8B 10                     MOV EDX,dword ptr [EAX]
0049D862  8B C8                     MOV ECX,EAX
0049D864  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D867  83 F8 33                  CMP EAX,0x33
0049D86A  75 10                     JNZ 0x0049d87c
0049D86C  8B 8E 9F 02 00 00         MOV ECX,dword ptr [ESI + 0x29f]
0049D872  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D875  50                        PUSH EAX
0049D876  51                        PUSH ECX
0049D877  E8 44 09 21 00            CALL 0x006ae1c0
LAB_0049d87c:
0049D87C  47                        INC EDI
0049D87D  3B FB                     CMP EDI,EBX
0049D87F  7C AF                     JL 0x0049d830
LAB_0049d881:
0049D881  8B 96 60 01 00 00         MOV EDX,dword ptr [ESI + 0x160]
0049D887  52                        PUSH EDX
0049D888  E8 83 08 21 00            CALL 0x006ae110
0049D88D  8B 86 9F 02 00 00         MOV EAX,dword ptr [ESI + 0x29f]
0049D893  C7 86 60 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x160],0x0
0049D89D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049D8A0  85 C9                     TEST ECX,ECX
0049D8A2  75 1B                     JNZ 0x0049d8bf
0049D8A4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049D8AA  68 C8 09 00 00            PUSH 0x9c8
0049D8AF  68 3C BE 7A 00            PUSH 0x7abe3c
0049D8B4  51                        PUSH ECX
0049D8B5  68 09 00 FE AF            PUSH 0xaffe0009
0049D8BA  E8 81 85 20 00            CALL 0x006a5e40
LAB_0049d8bf:
0049D8BF  33 DB                     XOR EBX,EBX
LAB_0049d8c1:
0049D8C1  83 BE 9B 02 00 00 01      CMP dword ptr [ESI + 0x29b],0x1
0049D8C8  75 3B                     JNZ 0x0049d905
0049D8CA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0049D8CD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D8D3  6A FF                     PUSH -0x1
0049D8D5  53                        PUSH EBX
0049D8D6  6A 33                     PUSH 0x33
0049D8D8  52                        PUSH EDX
0049D8D9  E8 37 3B F6 FF            CALL 0x00401415
0049D8DE  89 86 9F 02 00 00         MOV dword ptr [ESI + 0x29f],EAX
0049D8E4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049D8E7  3B CB                     CMP ECX,EBX
0049D8E9  75 1A                     JNZ 0x0049d905
0049D8EB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049D8F0  68 CD 09 00 00            PUSH 0x9cd
0049D8F5  68 3C BE 7A 00            PUSH 0x7abe3c
0049D8FA  50                        PUSH EAX
0049D8FB  68 09 00 FE AF            PUSH 0xaffe0009
0049D900  E8 3B 85 20 00            CALL 0x006a5e40
LAB_0049d905:
0049D905  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049D908  8B 96 9F 02 00 00         MOV EDX,dword ptr [ESI + 0x29f]
0049D90E  51                        PUSH ECX
0049D90F  52                        PUSH EDX
0049D910  6A 01                     PUSH 0x1
0049D912  8B CE                     MOV ECX,ESI
0049D914  E8 38 59 F6 FF            CALL 0x00403251
LAB_0049d919:
0049D919  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049D91E  33 D2                     XOR EDX,EDX
0049D920  B9 19 00 00 00            MOV ECX,0x19
0049D925  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
0049D92C  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049D932  F7 F1                     DIV ECX
0049D934  85 D2                     TEST EDX,EDX
0049D936  0F 85 94 00 00 00         JNZ 0x0049d9d0
0049D93C  39 9E 9F 02 00 00         CMP dword ptr [ESI + 0x29f],EBX
0049D942  0F 84 85 00 00 00         JZ 0x0049d9cd
0049D948  66 39 5E 27               CMP word ptr [ESI + 0x27],BX
0049D94C  74 7F                     JZ 0x0049d9cd
0049D94E  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
0049D951  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0049D954  85 FF                     TEST EDI,EDI
0049D956  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049D959  7E 52                     JLE 0x0049d9ad
LAB_0049d95b:
0049D95B  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049D95E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D961  50                        PUSH EAX
0049D962  8B D3                     MOV EDX,EBX
0049D964  E8 07 F3 20 00            CALL 0x006acc70
0049D969  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049D96C  66 3D FF FF               CMP AX,0xffff
0049D970  74 31                     JZ 0x0049d9a3
0049D972  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049D975  6A 01                     PUSH 0x1
0049D977  50                        PUSH EAX
0049D978  51                        PUSH ECX
0049D979  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D97F  E8 36 4F F6 FF            CALL 0x004028ba
0049D984  8B F8                     MOV EDI,EAX
0049D986  8B CF                     MOV ECX,EDI
0049D988  E8 4F 55 F6 FF            CALL 0x00402edc
0049D98D  83 F8 04                  CMP EAX,0x4
0049D990  74 18                     JZ 0x0049d9aa
0049D992  6A 04                     PUSH 0x4
0049D994  8B CF                     MOV ECX,EDI
0049D996  E8 5E 74 F6 FF            CALL 0x00404df9
0049D99B  83 F8 01                  CMP EAX,0x1
0049D99E  74 0A                     JZ 0x0049d9aa
0049D9A0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0049d9a3:
0049D9A3  43                        INC EBX
0049D9A4  3B DF                     CMP EBX,EDI
0049D9A6  7C B3                     JL 0x0049d95b
0049D9A8  EB 03                     JMP 0x0049d9ad
LAB_0049d9aa:
0049D9AA  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0049d9ad:
0049D9AD  3B DF                     CMP EBX,EDI
0049D9AF  75 1F                     JNZ 0x0049d9d0
0049D9B1  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0049D9B4  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0049D9BB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D9BE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049D9C4  5F                        POP EDI
0049D9C5  5E                        POP ESI
0049D9C6  5B                        POP EBX
0049D9C7  8B E5                     MOV ESP,EBP
0049D9C9  5D                        POP EBP
0049D9CA  C2 04 00                  RET 0x4
LAB_0049d9cd:
0049D9CD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0049d9d0:
0049D9D0  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0049D9D3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049D9D6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049D9DC  5F                        POP EDI
0049D9DD  5E                        POP ESI
0049D9DE  5B                        POP EBX
0049D9DF  8B E5                     MOV ESP,EBP
0049D9E1  5D                        POP EBP
0049D9E2  C2 04 00                  RET 0x4
LAB_0049d9e5:
0049D9E5  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0049D9E8  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049D9EE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049D9F3  75 3A                     JNZ 0x0049da2f
0049D9F5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049D9F8  8B 86 60 01 00 00         MOV EAX,dword ptr [ESI + 0x160]
0049D9FE  3B C3                     CMP EAX,EBX
0049DA00  74 0C                     JZ 0x0049da0e
0049DA02  50                        PUSH EAX
0049DA03  E8 08 07 21 00            CALL 0x006ae110
0049DA08  89 9E 60 01 00 00         MOV dword ptr [ESI + 0x160],EBX
LAB_0049da0e:
0049DA0E  8B 86 9F 02 00 00         MOV EAX,dword ptr [ESI + 0x29f]
0049DA14  3B C3                     CMP EAX,EBX
0049DA16  74 0C                     JZ 0x0049da24
0049DA18  50                        PUSH EAX
0049DA19  E8 F2 06 21 00            CALL 0x006ae110
0049DA1E  89 9E 9F 02 00 00         MOV dword ptr [ESI + 0x29f],EBX
LAB_0049da24:
0049DA24  33 C0                     XOR EAX,EAX
0049DA26  5F                        POP EDI
0049DA27  5E                        POP ESI
0049DA28  5B                        POP EBX
0049DA29  8B E5                     MOV ESP,EBP
0049DA2B  5D                        POP EBP
0049DA2C  C2 04 00                  RET 0x4
LAB_0049da2f:
0049DA2F  68 18 C0 7A 00            PUSH 0x7ac018
0049DA34  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049DA39  56                        PUSH ESI
0049DA3A  53                        PUSH EBX
0049DA3B  68 EA 09 00 00            PUSH 0x9ea
0049DA40  68 3C BE 7A 00            PUSH 0x7abe3c
0049DA45  E8 86 FA 20 00            CALL 0x006ad4d0
0049DA4A  83 C4 18                  ADD ESP,0x18
0049DA4D  85 C0                     TEST EAX,EAX
0049DA4F  74 01                     JZ 0x0049da52
0049DA51  CC                        INT3
LAB_0049da52:
0049DA52  68 EB 09 00 00            PUSH 0x9eb
0049DA57  68 3C BE 7A 00            PUSH 0x7abe3c
0049DA5C  53                        PUSH EBX
0049DA5D  56                        PUSH ESI
0049DA5E  E8 DD 83 20 00            CALL 0x006a5e40
0049DA63  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049DA66  5F                        POP EDI
0049DA67  5E                        POP ESI
0049DA68  5B                        POP EBX
0049DA69  8B E5                     MOV ESP,EBP
0049DA6B  5D                        POP EBP
0049DA6C  C2 04 00                  RET 0x4
