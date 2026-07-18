CursorClassTy::DoneCursor:
00543830  55                        PUSH EBP
00543831  8B EC                     MOV EBP,ESP
00543833  83 EC 48                  SUB ESP,0x48
00543836  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054383B  56                        PUSH ESI
0054383C  57                        PUSH EDI
0054383D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00543840  33 FF                     XOR EDI,EDI
00543842  8D 55 BC                  LEA EDX,[EBP + -0x44]
00543845  8D 4D B8                  LEA ECX,[EBP + -0x48]
00543848  57                        PUSH EDI
00543849  52                        PUSH EDX
0054384A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0054384D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543853  E8 98 9F 1E 00            CALL 0x0072d7f0
00543858  8B F0                     MOV ESI,EAX
0054385A  83 C4 08                  ADD ESP,0x8
0054385D  3B F7                     CMP ESI,EDI
0054385F  0F 85 9C 00 00 00         JNZ 0x00543901
00543865  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00543868  8B 86 D6 04 00 00         MOV EAX,dword ptr [ESI + 0x4d6]
0054386E  3B C7                     CMP EAX,EDI
00543870  7C 0C                     JL 0x0054387e
00543872  50                        PUSH EAX
00543873  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00543878  50                        PUSH EAX
00543879  E8 32 03 17 00            CALL 0x006b3bb0
LAB_0054387e:
0054387E  8B 8E D2 04 00 00         MOV ECX,dword ptr [ESI + 0x4d2]
00543884  8D 86 D2 04 00 00         LEA EAX,[ESI + 0x4d2]
0054388A  3B CF                     CMP ECX,EDI
0054388C  C7 86 D6 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4d6],0xffffffff
00543896  74 06                     JZ 0x0054389e
00543898  50                        PUSH EAX
00543899  E8 C2 77 16 00            CALL 0x006ab060
LAB_0054389e:
0054389E  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
005438A4  89 BE E3 04 00 00         MOV dword ptr [ESI + 0x4e3],EDI
005438AA  3B CF                     CMP ECX,EDI
005438AC  89 BE E7 04 00 00         MOV dword ptr [ESI + 0x4e7],EDI
005438B2  74 1A                     JZ 0x005438ce
005438B4  E8 F7 21 1D 00            CALL 0x00715ab0
005438B9  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
005438BF  51                        PUSH ECX
005438C0  E8 EB A9 1E 00            CALL 0x0072e2b0
005438C5  83 C4 04                  ADD ESP,0x4
005438C8  89 BE EB 04 00 00         MOV dword ptr [ESI + 0x4eb],EDI
LAB_005438ce:
005438CE  8B 86 AD 00 00 00         MOV EAX,dword ptr [ESI + 0xad]
005438D4  3B C7                     CMP EAX,EDI
005438D6  74 06                     JZ 0x005438de
005438D8  50                        PUSH EAX
005438D9  E8 52 51 17 00            CALL 0x006b8a30
LAB_005438de:
005438DE  8D 4E 18                  LEA ECX,[ESI + 0x18]
005438E1  89 BE AD 00 00 00         MOV dword ptr [ESI + 0xad],EDI
005438E7  E8 C4 21 1D 00            CALL 0x00715ab0
005438EC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005438EF  89 3D 30 2A 80 00         MOV dword ptr [0x00802a30],EDI
005438F5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005438FB  5F                        POP EDI
005438FC  5E                        POP ESI
005438FD  8B E5                     MOV ESP,EBP
005438FF  5D                        POP EBP
00543900  C3                        RET
LAB_00543901:
00543901  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00543904  68 E0 7D 7C 00            PUSH 0x7c7de0
00543909  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054390E  56                        PUSH ESI
0054390F  57                        PUSH EDI
00543910  6A 7D                     PUSH 0x7d
00543912  68 60 7D 7C 00            PUSH 0x7c7d60
00543917  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054391C  E8 AF 9B 16 00            CALL 0x006ad4d0
00543921  83 C4 18                  ADD ESP,0x18
00543924  85 C0                     TEST EAX,EAX
00543926  74 01                     JZ 0x00543929
00543928  CC                        INT3
LAB_00543929:
00543929  6A 7E                     PUSH 0x7e
0054392B  68 60 7D 7C 00            PUSH 0x7c7d60
00543930  57                        PUSH EDI
00543931  56                        PUSH ESI
00543932  E8 09 25 16 00            CALL 0x006a5e40
00543937  5F                        POP EDI
00543938  5E                        POP ESI
00543939  8B E5                     MOV ESP,EBP
0054393B  5D                        POP EBP
0054393C  C3                        RET
