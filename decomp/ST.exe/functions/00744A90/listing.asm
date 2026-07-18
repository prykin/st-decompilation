FUN_00744a90:
00744A90  55                        PUSH EBP
00744A91  8B EC                     MOV EBP,ESP
00744A93  83 EC 10                  SUB ESP,0x10
00744A96  66 C7 45 F0 4E 40         MOV word ptr [EBP + -0x10],0x404e
00744A9C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744A9F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00744AA5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744AA8  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
00744AAF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00744AB2  C7 42 08 00 00 00 00      MOV dword ptr [EDX + 0x8],0x0
00744AB9  EB 12                     JMP 0x00744acd
LAB_00744abb:
00744ABB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00744ABE  83 E8 01                  SUB EAX,0x1
00744AC1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00744AC4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744AC7  83 C1 01                  ADD ECX,0x1
00744ACA  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00744acd:
00744ACD  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00744AD1  76 74                     JBE 0x00744b47
00744AD3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00744AD6  8B 02                     MOV EAX,dword ptr [EDX]
00744AD8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00744ADB  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00744ADE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00744AE1  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00744AE4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00744AE7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744AEA  50                        PUSH EAX
00744AEB  E8 D0 FE FF FF            CALL 0x007449c0
00744AF0  83 C4 04                  ADD ESP,0x4
00744AF3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744AF6  51                        PUSH ECX
00744AF7  E8 C4 FE FF FF            CALL 0x007449c0
00744AFC  83 C4 04                  ADD ESP,0x4
00744AFF  8D 55 F4                  LEA EDX,[EBP + -0xc]
00744B02  52                        PUSH EDX
00744B03  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B06  50                        PUSH EAX
00744B07  E8 04 FE FF FF            CALL 0x00744910
00744B0C  83 C4 08                  ADD ESP,0x8
00744B0F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744B12  51                        PUSH ECX
00744B13  E8 A8 FE FF FF            CALL 0x007449c0
00744B18  83 C4 04                  ADD ESP,0x4
00744B1B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744B1E  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00744B21  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00744B24  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00744B2B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00744B32  8D 4D F4                  LEA ECX,[EBP + -0xc]
00744B35  51                        PUSH ECX
00744B36  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00744B39  52                        PUSH EDX
00744B3A  E8 D1 FD FF FF            CALL 0x00744910
00744B3F  83 C4 08                  ADD ESP,0x8
00744B42  E9 74 FF FF FF            JMP 0x00744abb
LAB_00744b47:
00744B47  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B4A  83 78 08 00               CMP dword ptr [EAX + 0x8],0x0
00744B4E  75 43                     JNZ 0x00744b93
00744B50  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744B53  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00744B56  C1 EA 10                  SHR EDX,0x10
00744B59  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B5C  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00744B5F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744B62  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00744B65  C1 E2 10                  SHL EDX,0x10
00744B68  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B6B  8B 08                     MOV ECX,dword ptr [EAX]
00744B6D  C1 E9 10                  SHR ECX,0x10
00744B70  0B D1                     OR EDX,ECX
00744B72  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B75  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00744B78  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744B7B  8B 11                     MOV EDX,dword ptr [ECX]
00744B7D  C1 E2 10                  SHL EDX,0x10
00744B80  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744B83  89 10                     MOV dword ptr [EAX],EDX
00744B85  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00744B89  66 83 E9 10               SUB CX,0x10
00744B8D  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
00744B91  EB B4                     JMP 0x00744b47
LAB_00744b93:
00744B93  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00744B96  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00744B99  25 00 80 00 00            AND EAX,0x8000
00744B9E  85 C0                     TEST EAX,EAX
00744BA0  75 1A                     JNZ 0x00744bbc
00744BA2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744BA5  51                        PUSH ECX
00744BA6  E8 15 FE FF FF            CALL 0x007449c0
00744BAB  83 C4 04                  ADD ESP,0x4
00744BAE  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
00744BB2  66 83 EA 01               SUB DX,0x1
00744BB6  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
00744BBA  EB D7                     JMP 0x00744b93
LAB_00744bbc:
00744BBC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744BBF  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00744BC3  66 89 48 0A               MOV word ptr [EAX + 0xa],CX
00744BC7  8B E5                     MOV ESP,EBP
00744BC9  5D                        POP EBP
00744BCA  C3                        RET
