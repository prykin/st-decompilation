FUN_00580780:
00580780  55                        PUSH EBP
00580781  8B EC                     MOV EBP,ESP
00580783  56                        PUSH ESI
00580784  57                        PUSH EDI
00580785  8B F9                     MOV EDI,ECX
00580787  8B 07                     MOV EAX,dword ptr [EDI]
00580789  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0058078C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0058078F  89 06                     MOV dword ptr [ESI],EAX
00580791  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00580794  51                        PUSH ECX
00580795  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0058079B  E8 17 42 E8 FF            CALL 0x004049b7
005807A0  88 46 04                  MOV byte ptr [ESI + 0x4],AL
005807A3  C6 46 05 04               MOV byte ptr [ESI + 0x5],0x4
005807A7  C6 46 06 00               MOV byte ptr [ESI + 0x6],0x0
005807AB  C6 46 07 01               MOV byte ptr [ESI + 0x7],0x1
005807AF  8A 97 1D 02 00 00         MOV DL,byte ptr [EDI + 0x21d]
005807B5  8B CF                     MOV ECX,EDI
005807B7  88 56 08                  MOV byte ptr [ESI + 0x8],DL
005807BA  8B 07                     MOV EAX,dword ptr [EDI]
005807BC  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005807BF  05 24 FF FF FF            ADD EAX,0xffffff24
005807C4  83 F8 04                  CMP EAX,0x4
005807C7  77 44                     JA 0x0058080d
switchD_005807c9::switchD:
005807C9  FF 24 85 1C 08 58 00      JMP dword ptr [EAX*0x4 + 0x58081c]
switchD_005807c9::caseD_dc:
005807D0  C6 46 1C 02               MOV byte ptr [ESI + 0x1c],0x2
005807D4  8B 8F 59 02 00 00         MOV ECX,dword ptr [EDI + 0x259]
005807DA  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
005807DD  5F                        POP EDI
005807DE  5E                        POP ESI
005807DF  5D                        POP EBP
005807E0  C2 04 00                  RET 0x4
switchD_005807c9::caseD_dd:
005807E3  C6 46 1C 00               MOV byte ptr [ESI + 0x1c],0x0
005807E7  8B 8F 59 02 00 00         MOV ECX,dword ptr [EDI + 0x259]
005807ED  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
005807F0  5F                        POP EDI
005807F1  5E                        POP ESI
005807F2  5D                        POP EBP
005807F3  C2 04 00                  RET 0x4
switchD_005807c9::caseD_de:
005807F6  C6 46 1C 01               MOV byte ptr [ESI + 0x1c],0x1
005807FA  8B 8F 59 02 00 00         MOV ECX,dword ptr [EDI + 0x259]
00580800  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
00580803  5F                        POP EDI
00580804  5E                        POP ESI
00580805  5D                        POP EBP
00580806  C2 04 00                  RET 0x4
switchD_005807c9::caseD_e0:
00580809  C6 46 1C 04               MOV byte ptr [ESI + 0x1c],0x4
switchD_005807c9::caseD_df:
0058080D  8B 8F 59 02 00 00         MOV ECX,dword ptr [EDI + 0x259]
00580813  5F                        POP EDI
00580814  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
00580817  5E                        POP ESI
00580818  5D                        POP EBP
00580819  C2 04 00                  RET 0x4
