FUN_005c05f0:
005C05F0  55                        PUSH EBP
005C05F1  8B EC                     MOV EBP,ESP
005C05F3  51                        PUSH ECX
005C05F4  53                        PUSH EBX
005C05F5  56                        PUSH ESI
005C05F6  8B F1                     MOV ESI,ECX
005C05F8  57                        PUSH EDI
005C05F9  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
005C0600  33 DB                     XOR EBX,EBX
005C0602  8D BE 8F 00 00 00         LEA EDI,[ESI + 0x8f]
LAB_005c0608:
005C0608  8B 07                     MOV EAX,dword ptr [EDI]
005C060A  3B C3                     CMP EAX,EBX
005C060C  74 0B                     JZ 0x005c0619
005C060E  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C0611  50                        PUSH EAX
005C0612  E8 99 50 12 00            CALL 0x006e56b0
005C0617  89 1F                     MOV dword ptr [EDI],EBX
LAB_005c0619:
005C0619  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C061C  83 C7 04                  ADD EDI,0x4
005C061F  48                        DEC EAX
005C0620  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C0623  75 E3                     JNZ 0x005c0608
005C0625  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
005C062B  3B C3                     CMP EAX,EBX
005C062D  74 0F                     JZ 0x005c063e
005C062F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C0632  50                        PUSH EAX
005C0633  E8 78 50 12 00            CALL 0x006e56b0
005C0638  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
LAB_005c063e:
005C063E  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C0643  3B C3                     CMP EAX,EBX
005C0645  74 28                     JZ 0x005c066f
005C0647  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005C064D  74 14                     JZ 0x005c0663
005C064F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C0652  83 F9 FF                  CMP ECX,-0x1
005C0655  74 18                     JZ 0x005c066f
005C0657  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C065A  51                        PUSH ECX
005C065B  50                        PUSH EAX
005C065C  E8 8F 34 0F 00            CALL 0x006b3af0
005C0661  EB 0C                     JMP 0x005c066f
LAB_005c0663:
005C0663  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C0669  51                        PUSH ECX
005C066A  E8 A1 84 0F 00            CALL 0x006b8b10
LAB_005c066f:
005C066F  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
005C0675  A1 30 67 80 00            MOV EAX,[0x00806730]
005C067A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C0680  52                        PUSH EDX
005C0681  50                        PUSH EAX
005C0682  53                        PUSH EBX
005C0683  53                        PUSH EBX
005C0684  51                        PUSH ECX
005C0685  E8 F6 58 0F 00            CALL 0x006b5f80
005C068A  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005C0690  3B CB                     CMP ECX,EBX
005C0692  74 1A                     JZ 0x005c06ae
005C0694  E8 F1 0B E4 FF            CALL 0x0040128a
005C0699  8B 96 53 04 00 00         MOV EDX,dword ptr [ESI + 0x453]
005C069F  52                        PUSH EDX
005C06A0  E8 0B DC 16 00            CALL 0x0072e2b0
005C06A5  83 C4 04                  ADD ESP,0x4
005C06A8  89 9E 53 04 00 00         MOV dword ptr [ESI + 0x453],EBX
LAB_005c06ae:
005C06AE  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005C06B4  3B CB                     CMP ECX,EBX
005C06B6  74 1A                     JZ 0x005c06d2
005C06B8  E8 CD 0B E4 FF            CALL 0x0040128a
005C06BD  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005C06C3  50                        PUSH EAX
005C06C4  E8 E7 DB 16 00            CALL 0x0072e2b0
005C06C9  83 C4 04                  ADD ESP,0x4
005C06CC  89 9E 57 04 00 00         MOV dword ptr [ESI + 0x457],EBX
LAB_005c06d2:
005C06D2  6A 33                     PUSH 0x33
005C06D4  E8 57 DE 16 00            CALL 0x0072e530
005C06D9  83 C4 04                  ADD ESP,0x4
005C06DC  3B C3                     CMP EAX,EBX
005C06DE  74 3A                     JZ 0x005c071a
005C06E0  BF 01 00 00 00            MOV EDI,0x1
005C06E5  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C06E9  88 18                     MOV byte ptr [EAX],BL
005C06EB  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005C06F2  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C06F6  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C06F9  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C06FC  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C06FF  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C0702  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C0705  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C070C  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C070F  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C0712  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C0715  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C0718  EB 07                     JMP 0x005c0721
LAB_005c071a:
005C071A  33 C0                     XOR EAX,EAX
005C071C  BF 01 00 00 00            MOV EDI,0x1
LAB_005c0721:
005C0721  3B C3                     CMP EAX,EBX
005C0723  89 86 53 04 00 00         MOV dword ptr [ESI + 0x453],EAX
005C0729  74 75                     JZ 0x005c07a0
005C072B  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C0731  53                        PUSH EBX
005C0732  57                        PUSH EDI
005C0733  6A 10                     PUSH 0x10
005C0735  57                        PUSH EDI
005C0736  68 5E 01 00 00            PUSH 0x15e
005C073B  68 BD 02 00 00            PUSH 0x2bd
005C0740  6A 46                     PUSH 0x46
005C0742  6A 47                     PUSH 0x47
005C0744  51                        PUSH ECX
005C0745  E8 A6 F2 0F 00            CALL 0x006bf9f0
005C074A  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005C0750  50                        PUSH EAX
005C0751  6A 46                     PUSH 0x46
005C0753  6A 47                     PUSH 0x47
005C0755  6A 02                     PUSH 0x2
005C0757  E8 41 3E E4 FF            CALL 0x0040459d
005C075C  85 C0                     TEST EAX,EAX
005C075E  74 35                     JZ 0x005c0795
005C0760  8B 86 53 04 00 00         MOV EAX,dword ptr [ESI + 0x453]
005C0766  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C0769  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C0770  8B 86 53 04 00 00         MOV EAX,dword ptr [ESI + 0x453]
005C0776  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C0779  3B C3                     CMP EAX,EBX
005C077B  7C 0D                     JL 0x005c078a
005C077D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C0783  50                        PUSH EAX
005C0784  52                        PUSH EDX
005C0785  E8 A6 2C 0F 00            CALL 0x006b3430
LAB_005c078a:
005C078A  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005C0790  E8 5C 4E E4 FF            CALL 0x004055f1
LAB_005c0795:
005C0795  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005C079B  E8 51 4E E4 FF            CALL 0x004055f1
LAB_005c07a0:
005C07A0  6A 33                     PUSH 0x33
005C07A2  E8 89 DD 16 00            CALL 0x0072e530
005C07A7  83 C4 04                  ADD ESP,0x4
005C07AA  3B C3                     CMP EAX,EBX
005C07AC  74 30                     JZ 0x005c07de
005C07AE  83 C9 FF                  OR ECX,0xffffffff
005C07B1  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C07B5  88 18                     MOV byte ptr [EAX],BL
005C07B7  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005C07BA  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C07BE  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005C07C1  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005C07C4  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005C07C7  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005C07CA  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005C07CD  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C07D0  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005C07D3  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005C07D6  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005C07D9  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005C07DC  EB 02                     JMP 0x005c07e0
LAB_005c07de:
005C07DE  33 C0                     XOR EAX,EAX
LAB_005c07e0:
005C07E0  3B C3                     CMP EAX,EBX
005C07E2  89 86 57 04 00 00         MOV dword ptr [ESI + 0x457],EAX
005C07E8  74 71                     JZ 0x005c085b
005C07EA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C07EF  53                        PUSH EBX
005C07F0  57                        PUSH EDI
005C07F1  6A 10                     PUSH 0x10
005C07F3  57                        PUSH EDI
005C07F4  6A 32                     PUSH 0x32
005C07F6  68 E9 02 00 00            PUSH 0x2e9
005C07FB  6A 0A                     PUSH 0xa
005C07FD  6A 1A                     PUSH 0x1a
005C07FF  50                        PUSH EAX
005C0800  E8 EB F1 0F 00            CALL 0x006bf9f0
005C0805  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005C080B  50                        PUSH EAX
005C080C  6A 0A                     PUSH 0xa
005C080E  6A 1A                     PUSH 0x1a
005C0810  6A 03                     PUSH 0x3
005C0812  E8 86 3D E4 FF            CALL 0x0040459d
005C0817  85 C0                     TEST EAX,EAX
005C0819  74 35                     JZ 0x005c0850
005C081B  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005C0821  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005C0824  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005C082B  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005C0831  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C0834  3B C3                     CMP EAX,EBX
005C0836  7C 0D                     JL 0x005c0845
005C0838  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C083E  50                        PUSH EAX
005C083F  51                        PUSH ECX
005C0840  E8 EB 2B 0F 00            CALL 0x006b3430
LAB_005c0845:
005C0845  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005C084B  E8 A1 4D E4 FF            CALL 0x004055f1
LAB_005c0850:
005C0850  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005C0856  E8 96 4D E4 FF            CALL 0x004055f1
LAB_005c085b:
005C085B  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005C085E  52                        PUSH EDX
005C085F  57                        PUSH EDI
005C0860  53                        PUSH EBX
005C0861  53                        PUSH EBX
005C0862  E8 D1 2E E4 FF            CALL 0x00403738
005C0867  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C086C  83 C4 10                  ADD ESP,0x10
005C086F  3B C3                     CMP EAX,EBX
005C0871  74 3B                     JZ 0x005c08ae
005C0873  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005C0879  74 27                     JZ 0x005c08a2
005C087B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C087E  83 F9 FF                  CMP ECX,-0x1
005C0881  74 2B                     JZ 0x005c08ae
005C0883  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005C0886  52                        PUSH EDX
005C0887  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005C088A  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C088D  52                        PUSH EDX
005C088E  6A FE                     PUSH -0x2
005C0890  51                        PUSH ECX
005C0891  50                        PUSH EAX
005C0892  E8 39 2C 0F 00            CALL 0x006b34d0
005C0897  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005C089B  5F                        POP EDI
005C089C  5E                        POP ESI
005C089D  5B                        POP EBX
005C089E  8B E5                     MOV ESP,EBP
005C08A0  5D                        POP EBP
005C08A1  C3                        RET
LAB_005c08a2:
005C08A2  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C08A8  51                        PUSH ECX
005C08A9  E8 B2 81 0F 00            CALL 0x006b8a60
LAB_005c08ae:
005C08AE  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005C08B2  5F                        POP EDI
005C08B3  5E                        POP ESI
005C08B4  5B                        POP EBX
005C08B5  8B E5                     MOV ESP,EBP
005C08B7  5D                        POP EBP
005C08B8  C3                        RET
