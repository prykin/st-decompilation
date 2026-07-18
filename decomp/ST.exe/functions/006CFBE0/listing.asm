FUN_006cfbe0:
006CFBE0  55                        PUSH EBP
006CFBE1  8B EC                     MOV EBP,ESP
006CFBE3  81 EC 88 00 00 00         SUB ESP,0x88
006CFBE9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CFBEC  53                        PUSH EBX
006CFBED  8B 0A                     MOV ECX,dword ptr [EDX]
006CFBEF  F7 C1 00 40 00 60         TEST ECX,0x60004000
006CFBF5  0F 85 8E 01 00 00         JNZ 0x006cfd89
006CFBFB  8B 82 CC 00 00 00         MOV EAX,dword ptr [EDX + 0xcc]
006CFC01  33 DB                     XOR EBX,EBX
006CFC03  3B C3                     CMP EAX,EBX
006CFC05  0F 84 7E 01 00 00         JZ 0x006cfd89
006CFC0B  56                        PUSH ESI
006CFC0C  57                        PUSH EDI
006CFC0D  F7 C1 00 00 00 C0         TEST ECX,0xc0000000
006CFC13  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006CFC16  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006CFC19  74 3B                     JZ 0x006cfc56
006CFC1B  8B 8A C8 00 00 00         MOV ECX,dword ptr [EDX + 0xc8]
006CFC21  3B CB                     CMP ECX,EBX
006CFC23  0F 8E 4F 01 00 00         JLE 0x006cfd78
006CFC29  8B F1                     MOV ESI,ECX
LAB_006cfc2b:
006CFC2B  8B 08                     MOV ECX,dword ptr [EAX]
006CFC2D  85 C9                     TEST ECX,ECX
006CFC2F  74 1A                     JZ 0x006cfc4b
006CFC31  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006CFC34  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006CFC37  3B FA                     CMP EDI,EDX
006CFC39  7D 03                     JGE 0x006cfc3e
006CFC3B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006cfc3e:
006CFC3E  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006CFC41  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CFC44  3B D1                     CMP EDX,ECX
006CFC46  7D 03                     JGE 0x006cfc4b
006CFC48  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006cfc4b:
006CFC4B  83 C0 08                  ADD EAX,0x8
006CFC4E  4E                        DEC ESI
006CFC4F  75 DA                     JNZ 0x006cfc2b
006CFC51  E9 22 01 00 00            JMP 0x006cfd78
LAB_006cfc56:
006CFC56  F7 C1 00 00 00 08         TEST ECX,0x8000000
006CFC5C  74 3B                     JZ 0x006cfc99
006CFC5E  8B 8A C8 00 00 00         MOV ECX,dword ptr [EDX + 0xc8]
006CFC64  3B CB                     CMP ECX,EBX
006CFC66  0F 8E 0C 01 00 00         JLE 0x006cfd78
006CFC6C  8B F1                     MOV ESI,ECX
LAB_006cfc6e:
006CFC6E  8B 08                     MOV ECX,dword ptr [EAX]
006CFC70  85 C9                     TEST ECX,ECX
006CFC72  74 1A                     JZ 0x006cfc8e
006CFC74  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006CFC77  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006CFC7A  3B FA                     CMP EDI,EDX
006CFC7C  7D 03                     JGE 0x006cfc81
006CFC7E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006cfc81:
006CFC81  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006CFC84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CFC87  3B D1                     CMP EDX,ECX
006CFC89  7D 03                     JGE 0x006cfc8e
006CFC8B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006cfc8e:
006CFC8E  83 C0 04                  ADD EAX,0x4
006CFC91  4E                        DEC ESI
006CFC92  75 DA                     JNZ 0x006cfc6e
006CFC94  E9 DF 00 00 00            JMP 0x006cfd78
LAB_006cfc99:
006CFC99  F7 C1 00 00 00 A0         TEST ECX,0xa0000000
006CFC9F  74 74                     JZ 0x006cfd15
006CFCA1  8B F0                     MOV ESI,EAX
006CFCA3  8B 82 C8 00 00 00         MOV EAX,dword ptr [EDX + 0xc8]
006CFCA9  33 FF                     XOR EDI,EDI
006CFCAB  3B C3                     CMP EAX,EBX
006CFCAD  C7 85 78 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x7c
006CFCB7  0F 8E BB 00 00 00         JLE 0x006cfd78
006CFCBD  BB 06 00 00 00            MOV EBX,0x6
LAB_006cfcc2:
006CFCC2  83 3E 00                  CMP dword ptr [ESI],0x0
006CFCC5  74 33                     JZ 0x006cfcfa
006CFCC7  89 9D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EBX
006CFCCD  8B 06                     MOV EAX,dword ptr [ESI]
006CFCCF  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
006CFCD5  8B 08                     MOV ECX,dword ptr [EAX]
006CFCD7  52                        PUSH EDX
006CFCD8  50                        PUSH EAX
006CFCD9  FF 51 58                  CALL dword ptr [ECX + 0x58]
006CFCDC  85 C0                     TEST EAX,EAX
006CFCDE  75 2B                     JNZ 0x006cfd0b
006CFCE0  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006CFCE3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CFCE6  3B C8                     CMP ECX,EAX
006CFCE8  7D 03                     JGE 0x006cfced
006CFCEA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006cfced:
006CFCED  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006CFCF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006CFCF3  3B C8                     CMP ECX,EAX
006CFCF5  7D 03                     JGE 0x006cfcfa
006CFCF7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006cfcfa:
006CFCFA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFCFD  83 C6 04                  ADD ESI,0x4
006CFD00  47                        INC EDI
006CFD01  3B B8 C8 00 00 00         CMP EDI,dword ptr [EAX + 0xc8]
006CFD07  7C B9                     JL 0x006cfcc2
006CFD09  EB 6D                     JMP 0x006cfd78
LAB_006cfd0b:
006CFD0B  33 C0                     XOR EAX,EAX
006CFD0D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006CFD10  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006CFD13  EB 63                     JMP 0x006cfd78
LAB_006cfd15:
006CFD15  F7 C1 00 00 00 05         TEST ECX,0x5000000
006CFD1B  74 5B                     JZ 0x006cfd78
006CFD1D  8B 8A C8 00 00 00         MOV ECX,dword ptr [EDX + 0xc8]
006CFD23  8B BA C0 00 00 00         MOV EDI,dword ptr [EDX + 0xc0]
006CFD29  3B CB                     CMP ECX,EBX
006CFD2B  7E 4B                     JLE 0x006cfd78
006CFD2D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006cfd30:
006CFD30  85 FF                     TEST EDI,EDI
006CFD32  7E 3B                     JLE 0x006cfd6f
006CFD34  8B F7                     MOV ESI,EDI
LAB_006cfd36:
006CFD36  66 83 78 04 00            CMP word ptr [EAX + 0x4],0x0
006CFD3B  7C 2C                     JL 0x006cfd69
006CFD3D  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
006CFD40  85 C9                     TEST ECX,ECX
006CFD42  74 25                     JZ 0x006cfd69
006CFD44  0F BF 10                  MOVSX EDX,word ptr [EAX]
006CFD47  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
006CFD4A  03 D3                     ADD EDX,EBX
006CFD4C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006CFD4F  3B DA                     CMP EBX,EDX
006CFD51  7D 03                     JGE 0x006cfd56
006CFD53  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006cfd56:
006CFD56  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006CFD5A  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006CFD5D  03 CA                     ADD ECX,EDX
006CFD5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CFD62  3B D1                     CMP EDX,ECX
006CFD64  7D 03                     JGE 0x006cfd69
006CFD66  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006cfd69:
006CFD69  83 C0 0A                  ADD EAX,0xa
006CFD6C  4E                        DEC ESI
006CFD6D  75 C7                     JNZ 0x006cfd36
LAB_006cfd6f:
006CFD6F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CFD72  49                        DEC ECX
006CFD73  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006CFD76  75 B8                     JNZ 0x006cfd30
LAB_006cfd78:
006CFD78  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFD7B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CFD7E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006CFD81  5F                        POP EDI
006CFD82  89 50 38                  MOV dword ptr [EAX + 0x38],EDX
006CFD85  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
006CFD88  5E                        POP ESI
LAB_006cfd89:
006CFD89  5B                        POP EBX
006CFD8A  8B E5                     MOV ESP,EBP
006CFD8C  5D                        POP EBP
006CFD8D  C2 04 00                  RET 0x4
