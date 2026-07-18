STGroupBoatC::Scout:
004A0590  55                        PUSH EBP
004A0591  8B EC                     MOV EBP,ESP
004A0593  83 EC 7C                  SUB ESP,0x7c
004A0596  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
004A0599  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004A059F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004A05A2  53                        PUSH EBX
004A05A3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A05A6  56                        PUSH ESI
004A05A7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A05AA  57                        PUSH EDI
004A05AB  8D 4D 88                  LEA ECX,[EBP + -0x78]
004A05AE  8D 45 84                  LEA EAX,[EBP + -0x7c]
004A05B1  6A 00                     PUSH 0x0
004A05B3  51                        PUSH ECX
004A05B4  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
004A05BB  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
004A05BE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A05C3  E8 28 D2 28 00            CALL 0x0072d7f0
004A05C8  8B F0                     MOV ESI,EAX
004A05CA  83 C4 08                  ADD ESP,0x8
004A05CD  85 F6                     TEST ESI,ESI
004A05CF  0F 85 90 02 00 00         JNZ 0x004a0865
004A05D5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A05D8  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004A05DB  85 C0                     TEST EAX,EAX
004A05DD  74 09                     JZ 0x004a05e8
004A05DF  83 F8 01                  CMP EAX,0x1
004A05E2  0F 85 C9 01 00 00         JNZ 0x004a07b1
LAB_004a05e8:
004A05E8  B9 15 00 00 00            MOV ECX,0x15
004A05ED  33 C0                     XOR EAX,EAX
004A05EF  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
004A05F5  8D 9E 00 03 00 00         LEA EBX,[ESI + 0x300]
004A05FB  F3 AB                     STOSD.REP ES:EDI
004A05FD  66 8B 8E C3 01 00 00      MOV CX,word ptr [ESI + 0x1c3]
004A0604  66 8B 96 BF 01 00 00      MOV DX,word ptr [ESI + 0x1bf]
004A060B  89 46 65                  MOV dword ptr [ESI + 0x65],EAX
004A060E  66 8B 86 C1 01 00 00      MOV AX,word ptr [ESI + 0x1c1]
004A0615  8D BE 02 03 00 00         LEA EDI,[ESI + 0x302]
004A061B  66 89 86 FA 02 00 00      MOV word ptr [ESI + 0x2fa],AX
004A0622  8D 86 FE 02 00 00         LEA EAX,[ESI + 0x2fe]
004A0628  57                        PUSH EDI
004A0629  66 89 8E FC 02 00 00      MOV word ptr [ESI + 0x2fc],CX
004A0630  53                        PUSH EBX
004A0631  50                        PUSH EAX
004A0632  8B CE                     MOV ECX,ESI
004A0634  66 89 96 F8 02 00 00      MOV word ptr [ESI + 0x2f8],DX
004A063B  E8 98 13 F6 FF            CALL 0x004019d8
004A0640  0F BF 96 FC 02 00 00      MOVSX EDX,word ptr [ESI + 0x2fc]
004A0647  0F BF 86 FA 02 00 00      MOVSX EAX,word ptr [ESI + 0x2fa]
004A064E  0F BF 8E F8 02 00 00      MOVSX ECX,word ptr [ESI + 0x2f8]
004A0655  6A 00                     PUSH 0x0
004A0657  52                        PUSH EDX
004A0658  0F BF 17                  MOVSX EDX,word ptr [EDI]
004A065B  50                        PUSH EAX
004A065C  51                        PUSH ECX
004A065D  0F BF 03                  MOVSX EAX,word ptr [EBX]
004A0660  0F BF 8E FE 02 00 00      MOVSX ECX,word ptr [ESI + 0x2fe]
004A0667  52                        PUSH EDX
004A0668  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
004A066B  50                        PUSH EAX
004A066C  51                        PUSH ECX
004A066D  52                        PUSH EDX
004A066E  56                        PUSH ESI
004A066F  E8 56 35 F6 FF            CALL 0x00403bca
004A0674  85 C0                     TEST EAX,EAX
004A0676  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A0679  75 09                     JNZ 0x004a0684
004A067B  5F                        POP EDI
004A067C  5E                        POP ESI
004A067D  5B                        POP EBX
004A067E  8B E5                     MOV ESP,EBP
004A0680  5D                        POP EBP
004A0681  C2 04 00                  RET 0x4
LAB_004a0684:
004A0684  0F BF 07                  MOVSX EAX,word ptr [EDI]
004A0687  0F BF 0B                  MOVSX ECX,word ptr [EBX]
004A068A  0F BF 96 FE 02 00 00      MOVSX EDX,word ptr [ESI + 0x2fe]
004A0691  6A 00                     PUSH 0x0
004A0693  50                        PUSH EAX
004A0694  0F BF 86 FC 02 00 00      MOVSX EAX,word ptr [ESI + 0x2fc]
004A069B  51                        PUSH ECX
004A069C  52                        PUSH EDX
004A069D  0F BF 8E FA 02 00 00      MOVSX ECX,word ptr [ESI + 0x2fa]
004A06A4  0F BF 96 F8 02 00 00      MOVSX EDX,word ptr [ESI + 0x2f8]
004A06AB  50                        PUSH EAX
004A06AC  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
004A06AF  51                        PUSH ECX
004A06B0  52                        PUSH EDX
004A06B1  50                        PUSH EAX
004A06B2  56                        PUSH ESI
004A06B3  E8 12 35 F6 FF            CALL 0x00403bca
004A06B8  8B D8                     MOV EBX,EAX
004A06BA  85 DB                     TEST EBX,EBX
004A06BC  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004A06BF  75 14                     JNZ 0x004a06d5
004A06C1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A06C4  51                        PUSH ECX
004A06C5  E8 46 DA 20 00            CALL 0x006ae110
004A06CA  33 C0                     XOR EAX,EAX
004A06CC  5F                        POP EDI
004A06CD  5E                        POP ESI
004A06CE  5B                        POP EBX
004A06CF  8B E5                     MOV ESP,EBP
004A06D1  5D                        POP EBP
004A06D2  C2 04 00                  RET 0x4
LAB_004a06d5:
004A06D5  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A06DB  33 FF                     XOR EDI,EDI
004A06DD  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A06E3  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004A06E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A06E9  85 C0                     TEST EAX,EAX
004A06EB  0F 8E B1 00 00 00         JLE 0x004a07a2
LAB_004a06f1:
004A06F1  8D 4D E0                  LEA ECX,[EBP + -0x20]
004A06F4  8B D7                     MOV EDX,EDI
004A06F6  51                        PUSH ECX
004A06F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A06FA  E8 71 C5 20 00            CALL 0x006acc70
004A06FF  8D 55 D8                  LEA EDX,[EBP + -0x28]
004A0702  8B CB                     MOV ECX,EBX
004A0704  52                        PUSH EDX
004A0705  8B D7                     MOV EDX,EDI
004A0707  E8 64 C5 20 00            CALL 0x006acc70
004A070C  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A070F  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A0712  50                        PUSH EAX
004A0713  8B D7                     MOV EDX,EDI
004A0715  E8 56 C5 20 00            CALL 0x006acc70
004A071A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A071D  66 3D FF FF               CMP AX,0xffff
004A0721  74 73                     JZ 0x004a0796
004A0723  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A0726  6A 01                     PUSH 0x1
004A0728  50                        PUSH EAX
004A0729  51                        PUSH ECX
004A072A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0730  E8 85 21 F6 FF            CALL 0x004028ba
004A0735  8B D8                     MOV EBX,EAX
004A0737  85 DB                     TEST EBX,EBX
004A0739  75 1B                     JNZ 0x004a0756
004A073B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A0741  68 2A 0D 00 00            PUSH 0xd2a
004A0746  68 3C BE 7A 00            PUSH 0x7abe3c
004A074B  52                        PUSH EDX
004A074C  68 04 00 FE AF            PUSH 0xaffe0004
004A0751  E8 EA 56 20 00            CALL 0x006a5e40
LAB_004a0756:
004A0756  66 8B 45 E0               MOV AX,word ptr [EBP + -0x20]
004A075A  66 8B 4D E2               MOV CX,word ptr [EBP + -0x1e]
004A075E  66 8B 55 E4               MOV DX,word ptr [EBP + -0x1c]
004A0762  66 89 45 CC               MOV word ptr [EBP + -0x34],AX
004A0766  66 8B 45 D8               MOV AX,word ptr [EBP + -0x28]
004A076A  66 89 4D CE               MOV word ptr [EBP + -0x32],CX
004A076E  66 8B 4D DA               MOV CX,word ptr [EBP + -0x26]
004A0772  66 89 45 D2               MOV word ptr [EBP + -0x2e],AX
004A0776  8D 45 C8                  LEA EAX,[EBP + -0x38]
004A0779  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
004A077D  66 8B 55 DC               MOV DX,word ptr [EBP + -0x24]
004A0781  66 89 4D D4               MOV word ptr [EBP + -0x2c],CX
004A0785  50                        PUSH EAX
004A0786  6A 08                     PUSH 0x8
004A0788  8B CB                     MOV ECX,EBX
004A078A  66 89 55 D6               MOV word ptr [EBP + -0x2a],DX
004A078E  E8 93 19 F6 FF            CALL 0x00402126
004A0793  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_004a0796:
004A0796  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A0799  47                        INC EDI
004A079A  3B F8                     CMP EDI,EAX
004A079C  0F 8C 4F FF FF FF         JL 0x004a06f1
LAB_004a07a2:
004A07A2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A07A5  51                        PUSH ECX
004A07A6  E8 65 D9 20 00            CALL 0x006ae110
004A07AB  53                        PUSH EBX
004A07AC  E8 5F D9 20 00            CALL 0x006ae110
LAB_004a07b1:
004A07B1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A07B7  B9 19 00 00 00            MOV ECX,0x19
004A07BC  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A07C2  33 D2                     XOR EDX,EDX
004A07C4  F7 F1                     DIV ECX
004A07C6  83 FA 03                  CMP EDX,0x3
004A07C9  0F 85 81 00 00 00         JNZ 0x004a0850
004A07CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A07D2  33 DB                     XOR EBX,EBX
004A07D4  85 C0                     TEST EAX,EAX
004A07D6  7E 6C                     JLE 0x004a0844
LAB_004a07d8:
004A07D8  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A07DB  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A07DE  52                        PUSH EDX
004A07DF  8B D3                     MOV EDX,EBX
004A07E1  E8 8A C4 20 00            CALL 0x006acc70
004A07E6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A07E9  66 3D FF FF               CMP AX,0xffff
004A07ED  74 4D                     JZ 0x004a083c
004A07EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A07F5  6A 01                     PUSH 0x1
004A07F7  50                        PUSH EAX
004A07F8  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A07FB  50                        PUSH EAX
004A07FC  E8 B9 20 F6 FF            CALL 0x004028ba
004A0801  8B F8                     MOV EDI,EAX
004A0803  85 FF                     TEST EDI,EDI
004A0805  75 1B                     JNZ 0x004a0822
004A0807  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A080D  68 3D 0D 00 00            PUSH 0xd3d
004A0812  68 3C BE 7A 00            PUSH 0x7abe3c
004A0817  51                        PUSH ECX
004A0818  68 04 00 FE AF            PUSH 0xaffe0004
004A081D  E8 1E 56 20 00            CALL 0x006a5e40
LAB_004a0822:
004A0822  8B CF                     MOV ECX,EDI
004A0824  E8 B3 26 F6 FF            CALL 0x00402edc
004A0829  83 F8 08                  CMP EAX,0x8
004A082C  74 16                     JZ 0x004a0844
004A082E  6A 08                     PUSH 0x8
004A0830  8B CF                     MOV ECX,EDI
004A0832  E8 C2 45 F6 FF            CALL 0x00404df9
004A0837  83 F8 01                  CMP EAX,0x1
004A083A  74 08                     JZ 0x004a0844
LAB_004a083c:
004A083C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A083F  43                        INC EBX
004A0840  3B D8                     CMP EBX,EAX
004A0842  7C 94                     JL 0x004a07d8
LAB_004a0844:
004A0844  3B 5D FC                  CMP EBX,dword ptr [EBP + -0x4]
004A0847  75 07                     JNZ 0x004a0850
004A0849  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_004a0850:
004A0850  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
004A0853  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_004a0859:
004A0859  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A085C  5F                        POP EDI
004A085D  5E                        POP ESI
004A085E  5B                        POP EBX
004A085F  8B E5                     MOV ESP,EBP
004A0861  5D                        POP EBP
004A0862  C2 04 00                  RET 0x4
LAB_004a0865:
004A0865  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
004A0868  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A086E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A0873  74 E4                     JZ 0x004a0859
004A0875  68 78 C1 7A 00            PUSH 0x7ac178
004A087A  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A087F  56                        PUSH ESI
004A0880  6A 00                     PUSH 0x0
004A0882  68 46 0D 00 00            PUSH 0xd46
004A0887  68 3C BE 7A 00            PUSH 0x7abe3c
004A088C  E8 3F CC 20 00            CALL 0x006ad4d0
004A0891  83 C4 18                  ADD ESP,0x18
004A0894  85 C0                     TEST EAX,EAX
004A0896  74 01                     JZ 0x004a0899
004A0898  CC                        INT3
LAB_004a0899:
004A0899  68 47 0D 00 00            PUSH 0xd47
004A089E  68 3C BE 7A 00            PUSH 0x7abe3c
004A08A3  6A 00                     PUSH 0x0
004A08A5  56                        PUSH ESI
004A08A6  E8 95 55 20 00            CALL 0x006a5e40
004A08AB  5F                        POP EDI
004A08AC  5E                        POP ESI
004A08AD  83 C8 FF                  OR EAX,0xffffffff
004A08B0  5B                        POP EBX
004A08B1  8B E5                     MOV ESP,EBP
004A08B3  5D                        POP EBP
004A08B4  C2 04 00                  RET 0x4
