FUN_005a0590:
005A0590  56                        PUSH ESI
005A0591  8B F1                     MOV ESI,ECX
005A0593  57                        PUSH EDI
005A0594  33 FF                     XOR EDI,EDI
005A0596  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
005A059C  3B C7                     CMP EAX,EDI
005A059E  74 09                     JZ 0x005a05a9
005A05A0  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A05A3  50                        PUSH EAX
005A05A4  E8 07 51 14 00            CALL 0x006e56b0
LAB_005a05a9:
005A05A9  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
005A05AF  89 BE C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EDI
005A05B5  3B C7                     CMP EAX,EDI
005A05B7  74 09                     JZ 0x005a05c2
005A05B9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A05BC  50                        PUSH EAX
005A05BD  E8 EE 50 14 00            CALL 0x006e56b0
LAB_005a05c2:
005A05C2  8B 86 D0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad0]
005A05C8  89 BE C8 1A 00 00         MOV dword ptr [ESI + 0x1ac8],EDI
005A05CE  3B C7                     CMP EAX,EDI
005A05D0  74 09                     JZ 0x005a05db
005A05D2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A05D5  50                        PUSH EAX
005A05D6  E8 D5 50 14 00            CALL 0x006e56b0
LAB_005a05db:
005A05DB  8B 86 CC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1acc]
005A05E1  89 BE D0 1A 00 00         MOV dword ptr [ESI + 0x1ad0],EDI
005A05E7  3B C7                     CMP EAX,EDI
005A05E9  74 09                     JZ 0x005a05f4
005A05EB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A05EE  50                        PUSH EAX
005A05EF  E8 BC 50 14 00            CALL 0x006e56b0
LAB_005a05f4:
005A05F4  8B 86 D4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad4]
005A05FA  89 BE CC 1A 00 00         MOV dword ptr [ESI + 0x1acc],EDI
005A0600  3B C7                     CMP EAX,EDI
005A0602  74 09                     JZ 0x005a060d
005A0604  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0607  50                        PUSH EAX
005A0608  E8 A3 50 14 00            CALL 0x006e56b0
LAB_005a060d:
005A060D  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
005A0613  89 BE D4 1A 00 00         MOV dword ptr [ESI + 0x1ad4],EDI
005A0619  3B C7                     CMP EAX,EDI
005A061B  74 09                     JZ 0x005a0626
005A061D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0620  50                        PUSH EAX
005A0621  E8 8A 50 14 00            CALL 0x006e56b0
LAB_005a0626:
005A0626  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
005A062C  89 BE D8 1A 00 00         MOV dword ptr [ESI + 0x1ad8],EDI
005A0632  3B C7                     CMP EAX,EDI
005A0634  74 09                     JZ 0x005a063f
005A0636  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0639  50                        PUSH EAX
005A063A  E8 71 50 14 00            CALL 0x006e56b0
LAB_005a063f:
005A063F  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
005A0645  89 BE DC 1A 00 00         MOV dword ptr [ESI + 0x1adc],EDI
005A064B  3B C7                     CMP EAX,EDI
005A064D  74 09                     JZ 0x005a0658
005A064F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0652  50                        PUSH EAX
005A0653  E8 58 50 14 00            CALL 0x006e56b0
LAB_005a0658:
005A0658  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
005A065E  89 BE E0 1A 00 00         MOV dword ptr [ESI + 0x1ae0],EDI
005A0664  3B C7                     CMP EAX,EDI
005A0666  74 09                     JZ 0x005a0671
005A0668  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A066B  50                        PUSH EAX
005A066C  E8 3F 50 14 00            CALL 0x006e56b0
LAB_005a0671:
005A0671  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
005A0677  89 BE E4 1A 00 00         MOV dword ptr [ESI + 0x1ae4],EDI
005A067D  3B C7                     CMP EAX,EDI
005A067F  74 09                     JZ 0x005a068a
005A0681  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0684  50                        PUSH EAX
005A0685  E8 26 50 14 00            CALL 0x006e56b0
LAB_005a068a:
005A068A  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
005A0690  89 BE 14 1B 00 00         MOV dword ptr [ESI + 0x1b14],EDI
005A0696  3B C7                     CMP EAX,EDI
005A0698  74 06                     JZ 0x005a06a0
005A069A  50                        PUSH EAX
005A069B  E8 D0 4E 11 00            CALL 0x006b5570
LAB_005a06a0:
005A06A0  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005A06A6  89 BE E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EDI
005A06AC  3B C7                     CMP EAX,EDI
005A06AE  74 06                     JZ 0x005a06b6
005A06B0  50                        PUSH EAX
005A06B1  E8 BA 4E 11 00            CALL 0x006b5570
LAB_005a06b6:
005A06B6  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005A06BC  89 BE EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EDI
005A06C2  3B C7                     CMP EAX,EDI
005A06C4  74 06                     JZ 0x005a06cc
005A06C6  50                        PUSH EAX
005A06C7  E8 A4 4E 11 00            CALL 0x006b5570
LAB_005a06cc:
005A06CC  8B 86 F4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af4]
005A06D2  89 BE F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EDI
005A06D8  3B C7                     CMP EAX,EDI
005A06DA  74 06                     JZ 0x005a06e2
005A06DC  50                        PUSH EAX
005A06DD  E8 8E 4E 11 00            CALL 0x006b5570
LAB_005a06e2:
005A06E2  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005A06E8  89 BE F4 1A 00 00         MOV dword ptr [ESI + 0x1af4],EDI
005A06EE  3B C7                     CMP EAX,EDI
005A06F0  74 06                     JZ 0x005a06f8
005A06F2  50                        PUSH EAX
005A06F3  E8 78 4E 11 00            CALL 0x006b5570
LAB_005a06f8:
005A06F8  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005A06FE  89 BE F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EDI
005A0704  3B C7                     CMP EAX,EDI
005A0706  74 06                     JZ 0x005a070e
005A0708  50                        PUSH EAX
005A0709  E8 62 4E 11 00            CALL 0x006b5570
LAB_005a070e:
005A070E  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005A0714  89 BE FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EDI
005A071A  3B C7                     CMP EAX,EDI
005A071C  74 06                     JZ 0x005a0724
005A071E  50                        PUSH EAX
005A071F  E8 4C 4E 11 00            CALL 0x006b5570
LAB_005a0724:
005A0724  8B 86 04 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b04]
005A072A  89 BE 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EDI
005A0730  3B C7                     CMP EAX,EDI
005A0732  74 06                     JZ 0x005a073a
005A0734  50                        PUSH EAX
005A0735  E8 36 4E 11 00            CALL 0x006b5570
LAB_005a073a:
005A073A  8B 8E 8E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e8e]
005A0740  8D 86 8E 1E 00 00         LEA EAX,[ESI + 0x1e8e]
005A0746  3B CF                     CMP ECX,EDI
005A0748  89 BE 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EDI
005A074E  74 06                     JZ 0x005a0756
005A0750  50                        PUSH EAX
005A0751  E8 0A A9 10 00            CALL 0x006ab060
LAB_005a0756:
005A0756  8B 8E 92 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e92]
005A075C  8D 86 92 1E 00 00         LEA EAX,[ESI + 0x1e92]
005A0762  3B CF                     CMP ECX,EDI
005A0764  5F                        POP EDI
005A0765  5E                        POP ESI
005A0766  74 06                     JZ 0x005a076e
005A0768  50                        PUSH EAX
005A0769  E8 F2 A8 10 00            CALL 0x006ab060
LAB_005a076e:
005A076E  C3                        RET
