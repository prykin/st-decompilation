FUN_006ba7e0:
006BA7E0  55                        PUSH EBP
006BA7E1  8B EC                     MOV EBP,ESP
006BA7E3  81 EC D0 00 00 00         SUB ESP,0xd0
006BA7E9  53                        PUSH EBX
006BA7EA  56                        PUSH ESI
006BA7EB  57                        PUSH EDI
006BA7EC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006BA7EF  8B C7                     MOV EAX,EDI
006BA7F1  33 DB                     XOR EBX,EBX
006BA7F3  25 00 00 00 FF            AND EAX,0xff000000
006BA7F8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006BA7FB  3D 00 00 00 01            CMP EAX,0x1000000
006BA800  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BA803  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
006BA80A  75 14                     JNZ 0x006ba820
006BA80C  83 78 20 08               CMP dword ptr [EAX + 0x20],0x8
006BA810  75 0E                     JNZ 0x006ba820
006BA812  81 E7 FF 00 00 00         AND EDI,0xff
006BA818  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006BA81B  E9 81 01 00 00            JMP 0x006ba9a1
LAB_006ba820:
006BA820  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BA823  81 E1 00 11 00 00         AND ECX,0x1100
006BA829  81 F9 00 01 00 00         CMP ECX,0x100
006BA82F  0F 84 97 01 00 00         JZ 0x006ba9cc
006BA835  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006BA838  85 C9                     TEST ECX,ECX
006BA83A  0F 84 8C 01 00 00         JZ 0x006ba9cc
006BA840  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006BA846  8D 4D B0                  LEA ECX,[EBP + -0x50]
006BA849  8D 45 AC                  LEA EAX,[EBP + -0x54]
006BA84C  6A 00                     PUSH 0x0
006BA84E  51                        PUSH ECX
006BA84F  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006BA852  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006BA857  E8 94 2F 07 00            CALL 0x0072d7f0
006BA85C  83 C4 08                  ADD ESP,0x8
006BA85F  85 C0                     TEST EAX,EAX
006BA861  0F 85 29 01 00 00         JNZ 0x006ba990
006BA867  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BA86A  8D 55 FC                  LEA EDX,[EBP + -0x4]
006BA86D  52                        PUSH EDX
006BA86E  56                        PUSH ESI
006BA86F  E8 FC 3E 01 00            CALL 0x006ce770
006BA874  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BA877  6A 00                     PUSH 0x0
006BA879  6A 00                     PUSH 0x0
006BA87B  50                        PUSH EAX
006BA87C  FF 15 8C BA 85 00         CALL dword ptr [0x0085ba8c]
006BA882  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BA885  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006BA888  51                        PUSH ECX
006BA889  6A 00                     PUSH 0x0
006BA88B  6A 00                     PUSH 0x0
006BA88D  52                        PUSH EDX
006BA88E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BA891  FF 15 88 BA 85 00         CALL dword ptr [0x0085ba88]
006BA897  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BA89A  50                        PUSH EAX
006BA89B  56                        PUSH ESI
006BA89C  E8 1F 40 01 00            CALL 0x006ce8c0
006BA8A1  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BA8A8  74 0D                     JZ 0x006ba8b7
006BA8AA  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006BA8B0  51                        PUSH ECX
006BA8B1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006ba8b7:
006BA8B7  C7 85 30 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x7c
006BA8C1  33 FF                     XOR EDI,EDI
LAB_006ba8c3:
006BA8C3  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BA8C6  6A 00                     PUSH 0x0
006BA8C8  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
006BA8CE  6A 00                     PUSH 0x0
006BA8D0  8B 10                     MOV EDX,dword ptr [EAX]
006BA8D2  51                        PUSH ECX
006BA8D3  6A 00                     PUSH 0x0
006BA8D5  50                        PUSH EAX
006BA8D6  FF 52 64                  CALL dword ptr [EDX + 0x64]
006BA8D9  8B D8                     MOV EBX,EAX
006BA8DB  85 DB                     TEST EBX,EBX
006BA8DD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006BA8E0  74 41                     JZ 0x006ba923
006BA8E2  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BA8E8  75 08                     JNZ 0x006ba8f2
006BA8EA  56                        PUSH ESI
006BA8EB  E8 50 43 01 00            CALL 0x006cec40
006BA8F0  EB 08                     JMP 0x006ba8fa
LAB_006ba8f2:
006BA8F2  81 FB 1C 02 76 88         CMP EBX,0x8876021c
006BA8F8  75 09                     JNZ 0x006ba903
LAB_006ba8fa:
006BA8FA  47                        INC EDI
006BA8FB  81 FF 40 9C 00 00         CMP EDI,0x9c40
006BA901  7C C0                     JL 0x006ba8c3
LAB_006ba903:
006BA903  85 DB                     TEST EBX,EBX
006BA905  74 1C                     JZ 0x006ba923
006BA907  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BA90E  0F 84 8A 00 00 00         JZ 0x006ba99e
006BA914  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BA91A  56                        PUSH ESI
006BA91B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006BA921  EB 7B                     JMP 0x006ba99e
LAB_006ba923:
006BA923  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BA926  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
006BA92C  BF 01 00 00 00            MOV EDI,0x1
006BA931  6A 00                     PUSH 0x0
006BA933  8B 02                     MOV EAX,dword ptr [EDX]
006BA935  D3 E7                     SHL EDI,CL
006BA937  4F                        DEC EDI
006BA938  23 F8                     AND EDI,EAX
006BA93A  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BA93D  50                        PUSH EAX
006BA93E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006BA941  8B 08                     MOV ECX,dword ptr [EAX]
006BA943  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006BA949  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BA950  74 0D                     JZ 0x006ba95f
006BA952  8D 96 F0 04 00 00         LEA EDX,[ESI + 0x4f0]
006BA958  52                        PUSH EDX
006BA959  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006ba95f:
006BA95F  8D 45 FC                  LEA EAX,[EBP + -0x4]
006BA962  50                        PUSH EAX
006BA963  56                        PUSH ESI
006BA964  E8 07 3E 01 00            CALL 0x006ce770
006BA969  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BA96C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006BA96F  51                        PUSH ECX
006BA970  6A 00                     PUSH 0x0
006BA972  6A 00                     PUSH 0x0
006BA974  52                        PUSH EDX
006BA975  FF 15 88 BA 85 00         CALL dword ptr [0x0085ba88]
006BA97B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BA97E  50                        PUSH EAX
006BA97F  56                        PUSH ESI
006BA980  E8 3B 3F 01 00            CALL 0x006ce8c0
006BA985  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006BA988  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BA98E  EB 11                     JMP 0x006ba9a1
LAB_006ba990:
006BA990  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006BA993  8B D8                     MOV EBX,EAX
006BA995  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BA99B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006ba99e:
006BA99E  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006ba9a1:
006BA9A1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BA9A4  85 DB                     TEST EBX,EBX
006BA9A6  89 38                     MOV dword ptr [EAX],EDI
006BA9A8  74 22                     JZ 0x006ba9cc
006BA9AA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006BA9B0  68 B7 02 00 00            PUSH 0x2b7
006BA9B5  68 48 DC 7E 00            PUSH 0x7edc48
006BA9BA  51                        PUSH ECX
006BA9BB  53                        PUSH EBX
006BA9BC  E8 7F B4 FE FF            CALL 0x006a5e40
006BA9C1  8B C3                     MOV EAX,EBX
006BA9C3  5F                        POP EDI
006BA9C4  5E                        POP ESI
006BA9C5  5B                        POP EBX
006BA9C6  8B E5                     MOV ESP,EBP
006BA9C8  5D                        POP EBP
006BA9C9  C2 0C 00                  RET 0xc
LAB_006ba9cc:
006BA9CC  5F                        POP EDI
006BA9CD  5E                        POP ESI
006BA9CE  33 C0                     XOR EAX,EAX
006BA9D0  5B                        POP EBX
006BA9D1  8B E5                     MOV ESP,EBP
006BA9D3  5D                        POP EBP
006BA9D4  C2 0C 00                  RET 0xc
