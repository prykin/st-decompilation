SettMapMTy::InitSettMap:
005CBD00  55                        PUSH EBP
005CBD01  8B EC                     MOV EBP,ESP
005CBD03  83 EC 4C                  SUB ESP,0x4c
005CBD06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CBD0B  53                        PUSH EBX
005CBD0C  56                        PUSH ESI
005CBD0D  57                        PUSH EDI
005CBD0E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005CBD11  33 FF                     XOR EDI,EDI
005CBD13  8D 55 B8                  LEA EDX,[EBP + -0x48]
005CBD16  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005CBD19  57                        PUSH EDI
005CBD1A  52                        PUSH EDX
005CBD1B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005CBD1E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CBD24  E8 C7 1A 16 00            CALL 0x0072d7f0
005CBD29  8B F0                     MOV ESI,EAX
005CBD2B  83 C4 08                  ADD ESP,0x8
005CBD2E  3B F7                     CMP ESI,EDI
005CBD30  0F 85 27 04 00 00         JNZ 0x005cc15d
005CBD36  B9 20 76 80 00            MOV ECX,0x807620
005CBD3B  C6 05 83 87 80 00 03      MOV byte ptr [0x00808783],0x3
005CBD42  E8 69 94 11 00            CALL 0x006e51b0
005CBD47  A3 54 87 80 00            MOV [0x00808754],EAX
005CBD4C  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CBD51  84 C0                     TEST AL,AL
005CBD53  74 27                     JZ 0x005cbd7c
005CBD55  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CBD58  89 3D 58 99 80 00         MOV dword ptr [0x00809958],EDI
005CBD5E  89 BE 21 21 00 00         MOV dword ptr [ESI + 0x2121],EDI
005CBD64  A1 58 99 80 00            MOV EAX,[0x00809958]
005CBD69  8A 0D 4B 73 80 00         MOV CL,byte ptr [0x0080734b]
005CBD6F  A3 AB 8A 80 00            MOV [0x00808aab],EAX
005CBD74  88 0D A8 8A 80 00         MOV byte ptr [0x00808aa8],CL
005CBD7A  EB 1D                     JMP 0x005cbd99
LAB_005cbd7c:
005CBD7C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CBD7F  83 C8 FF                  OR EAX,0xffffffff
005CBD82  A3 58 99 80 00            MOV [0x00809958],EAX
005CBD87  89 86 21 21 00 00         MOV dword ptr [ESI + 0x2121],EAX
005CBD8D  8B 15 58 99 80 00         MOV EDX,dword ptr [0x00809958]
005CBD93  89 15 AB 8A 80 00         MOV dword ptr [0x00808aab],EDX
LAB_005cbd99:
005CBD99  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005CBD9F  05 9A 06 00 00            ADD EAX,0x69a
005CBDA4  39 38                     CMP dword ptr [EAX],EDI
005CBDA6  74 06                     JZ 0x005cbdae
005CBDA8  50                        PUSH EAX
005CBDA9  E8 B2 F2 0D 00            CALL 0x006ab060
LAB_005cbdae:
005CBDAE  6A 0A                     PUSH 0xa
005CBDB0  6A 0C                     PUSH 0xc
005CBDB2  6A 20                     PUSH 0x20
005CBDB4  57                        PUSH EDI
005CBDB5  E8 D6 24 0E 00            CALL 0x006ae290
005CBDBA  89 86 37 22 00 00         MOV dword ptr [ESI + 0x2237],EAX
005CBDC0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CBDC5  6A 01                     PUSH 0x1
005CBDC7  8B 80 F0 02 00 00         MOV EAX,dword ptr [EAX + 0x2f0]
005CBDCD  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
005CBDD0  8D 48 28                  LEA ECX,[EAX + 0x28]
005CBDD3  51                        PUSH ECX
005CBDD4  50                        PUSH EAX
005CBDD5  E8 06 92 0E 00            CALL 0x006b4fe0
005CBDDA  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005CBDDD  50                        PUSH EAX
005CBDDE  33 C0                     XOR EAX,EAX
005CBDE0  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005CBDE4  50                        PUSH EAX
005CBDE5  6A 16                     PUSH 0x16
005CBDE7  68 FA 00 00 00            PUSH 0xfa
005CBDEC  E8 CF 92 0E 00            CALL 0x006b50c0
005CBDF1  89 86 04 22 00 00         MOV dword ptr [ESI + 0x2204],EAX
005CBDF7  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005CBDFA  3B DF                     CMP EBX,EDI
005CBDFC  75 1A                     JNZ 0x005cbe18
005CBDFE  33 DB                     XOR EBX,EBX
005CBE00  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005CBE04  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005CBE08  83 C3 1F                  ADD EBX,0x1f
005CBE0B  C1 EB 03                  SHR EBX,0x3
005CBE0E  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005CBE14  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005cbe18:
005CBE18  50                        PUSH EAX
005CBE19  E8 82 91 0E 00            CALL 0x006b4fa0
005CBE1E  8B CB                     MOV ECX,EBX
005CBE20  8B F8                     MOV EDI,EAX
005CBE22  8B D1                     MOV EDX,ECX
005CBE24  83 C8 FF                  OR EAX,0xffffffff
005CBE27  C1 E9 02                  SHR ECX,0x2
005CBE2A  F3 AB                     STOSD.REP ES:EDI
005CBE2C  8B CA                     MOV ECX,EDX
005CBE2E  83 E1 03                  AND ECX,0x3
005CBE31  F3 AA                     STOSB.REP ES:EDI
005CBE33  8B 86 04 22 00 00         MOV EAX,dword ptr [ESI + 0x2204]
005CBE39  8D BE 00 22 00 00         LEA EDI,[ESI + 0x2200]
005CBE3F  50                        PUSH EAX
005CBE40  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005CBE43  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005CBE46  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CBE4B  51                        PUSH ECX
005CBE4C  52                        PUSH EDX
005CBE4D  68 CF 4A 40 00            PUSH 0x404acf
005CBE52  6A 31                     PUSH 0x31
005CBE54  57                        PUSH EDI
005CBE55  50                        PUSH EAX
005CBE56  E8 D5 64 0E 00            CALL 0x006b2330
005CBE5B  8B 0F                     MOV ECX,dword ptr [EDI]
005CBE5D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CBE63  68 DC 01 00 00            PUSH 0x1dc
005CBE68  68 C8 00 00 00            PUSH 0xc8
005CBE6D  6A FF                     PUSH -0x1
005CBE6F  51                        PUSH ECX
005CBE70  52                        PUSH EDX
005CBE71  E8 CA 77 0E 00            CALL 0x006b3640
005CBE76  8B 07                     MOV EAX,dword ptr [EDI]
005CBE78  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CBE7E  50                        PUSH EAX
005CBE7F  51                        PUSH ECX
005CBE80  E8 6B 7C 0E 00            CALL 0x006b3af0
005CBE85  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005CBE88  8B CE                     MOV ECX,ESI
005CBE8A  53                        PUSH EBX
005CBE8B  E8 16 65 E3 FF            CALL 0x004023a6
005CBE90  80 FB 0D                  CMP BL,0xd
005CBE93  74 13                     JZ 0x005cbea8
005CBE95  80 FB 0E                  CMP BL,0xe
005CBE98  74 0E                     JZ 0x005cbea8
005CBE9A  80 FB 0F                  CMP BL,0xf
005CBE9D  74 09                     JZ 0x005cbea8
005CBE9F  80 FB 10                  CMP BL,0x10
005CBEA2  0F 85 07 02 00 00         JNZ 0x005cc0af
LAB_005cbea8:
005CBEA8  83 BE 27 1E 00 00 11      CMP dword ptr [ESI + 0x1e27],0x11
005CBEAF  0F 85 FA 01 00 00         JNZ 0x005cc0af
005CBEB5  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005CBEBB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CBEC1  81 C2 40 01 00 00         ADD EDX,0x140
005CBEC7  8D 45 FC                  LEA EAX,[EBP + -0x4]
005CBECA  52                        PUSH EDX
005CBECB  6A 62                     PUSH 0x62
005CBECD  68 90 01 00 00            PUSH 0x190
005CBED2  68 61 3B 40 00            PUSH 0x403b61
005CBED7  6A 32                     PUSH 0x32
005CBED9  50                        PUSH EAX
005CBEDA  51                        PUSH ECX
005CBEDB  E8 50 64 0E 00            CALL 0x006b2330
005CBEE0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005CBEE3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CBEE8  68 F1 01 00 00            PUSH 0x1f1
005CBEED  68 C8 00 00 00            PUSH 0xc8
005CBEF2  6A FF                     PUSH -0x1
005CBEF4  52                        PUSH EDX
005CBEF5  50                        PUSH EAX
005CBEF6  E8 45 77 0E 00            CALL 0x006b3640
005CBEFB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CBF00  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CBF06  83 F9 FF                  CMP ECX,-0x1
005CBF09  74 22                     JZ 0x005cbf2d
005CBF0B  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005CBF11  52                        PUSH EDX
005CBF12  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005CBF18  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005CBF1E  52                        PUSH EDX
005CBF1F  6A FE                     PUSH -0x2
005CBF21  51                        PUSH ECX
005CBF22  50                        PUSH EAX
005CBF23  E8 A8 75 0E 00            CALL 0x006b34d0
005CBF28  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cbf2d:
005CBF2D  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CBF33  83 F9 FF                  CMP ECX,-0x1
005CBF36  74 1D                     JZ 0x005cbf55
005CBF38  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005CBF3E  52                        PUSH EDX
005CBF3F  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005CBF45  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005CBF4B  52                        PUSH EDX
005CBF4C  6A FE                     PUSH -0x2
005CBF4E  51                        PUSH ECX
005CBF4F  50                        PUSH EAX
005CBF50  E8 7B 75 0E 00            CALL 0x006b34d0
LAB_005cbf55:
005CBF55  6A 33                     PUSH 0x33
005CBF57  E8 D4 25 16 00            CALL 0x0072e530
005CBF5C  33 FF                     XOR EDI,EDI
005CBF5E  83 C4 04                  ADD ESP,0x4
005CBF61  3B C7                     CMP EAX,EDI
005CBF63  74 3B                     JZ 0x005cbfa0
005CBF65  BB 01 00 00 00            MOV EBX,0x1
005CBF6A  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005CBF6E  C6 00 00                  MOV byte ptr [EAX],0x0
005CBF71  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005CBF78  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005CBF7C  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005CBF7F  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005CBF82  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005CBF85  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
005CBF88  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
005CBF8B  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005CBF92  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005CBF95  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005CBF98  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
005CBF9B  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
005CBF9E  EB 07                     JMP 0x005cbfa7
LAB_005cbfa0:
005CBFA0  33 C0                     XOR EAX,EAX
005CBFA2  BB 01 00 00 00            MOV EBX,0x1
LAB_005cbfa7:
005CBFA7  3B C7                     CMP EAX,EDI
005CBFA9  89 86 F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EAX
005CBFAF  0F 84 D5 00 00 00         JZ 0x005cc08a
005CBFB5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CBFBB  57                        PUSH EDI
005CBFBC  53                        PUSH EBX
005CBFBD  6A 10                     PUSH 0x10
005CBFBF  53                        PUSH EBX
005CBFC0  6A 62                     PUSH 0x62
005CBFC2  68 90 01 00 00            PUSH 0x190
005CBFC7  68 F1 01 00 00            PUSH 0x1f1
005CBFCC  68 C8 00 00 00            PUSH 0xc8
005CBFD1  51                        PUSH ECX
005CBFD2  E8 19 3A 0F 00            CALL 0x006bf9f0
005CBFD7  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005CBFDD  50                        PUSH EAX
005CBFDE  68 F1 01 00 00            PUSH 0x1f1
005CBFE3  68 C8 00 00 00            PUSH 0xc8
005CBFE8  53                        PUSH EBX
005CBFE9  E8 AF 85 E3 FF            CALL 0x0040459d
005CBFEE  85 C0                     TEST EAX,EAX
005CBFF0  0F 84 94 00 00 00         JZ 0x005cc08a
005CBFF6  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005CBFFC  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005CBFFF  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005CC003  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005CC006  8B B6 F8 21 00 00         MOV ESI,dword ptr [ESI + 0x21f8]
005CC00C  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005CC00F  3B C7                     CMP EAX,EDI
005CC011  7C 0C                     JL 0x005cc01f
005CC013  50                        PUSH EAX
005CC014  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CC019  50                        PUSH EAX
005CC01A  E8 11 74 0E 00            CALL 0x006b3430
LAB_005cc01f:
005CC01F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC024  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CC02A  83 F9 FF                  CMP ECX,-0x1
005CC02D  74 12                     JZ 0x005cc041
005CC02F  51                        PUSH ECX
005CC030  8B 88 A4 05 00 00         MOV ECX,dword ptr [EAX + 0x5a4]
005CC036  51                        PUSH ECX
005CC037  E8 B4 7A 0E 00            CALL 0x006b3af0
005CC03C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc041:
005CC041  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CC047  83 F9 FF                  CMP ECX,-0x1
005CC04A  74 12                     JZ 0x005cc05e
005CC04C  8B 90 35 06 00 00         MOV EDX,dword ptr [EAX + 0x635]
005CC052  51                        PUSH ECX
005CC053  52                        PUSH EDX
005CC054  E8 97 7A 0E 00            CALL 0x006b3af0
005CC059  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc05e:
005CC05E  8B 80 58 05 00 00         MOV EAX,dword ptr [EAX + 0x558]
005CC064  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CC06A  50                        PUSH EAX
005CC06B  51                        PUSH ECX
005CC06C  E8 7F 7A 0E 00            CALL 0x006b3af0
005CC071  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CC077  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CC07D  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005CC083  50                        PUSH EAX
005CC084  51                        PUSH ECX
005CC085  E8 66 7A 0E 00            CALL 0x006b3af0
LAB_005cc08a:
005CC08A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CC08D  83 F8 FF                  CMP EAX,-0x1
005CC090  0F 84 A3 00 00 00         JZ 0x005cc139
005CC096  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC09C  50                        PUSH EAX
005CC09D  52                        PUSH EDX
005CC09E  E8 0D 7B 0E 00            CALL 0x006b3bb0
005CC0A3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005CC0AA  E9 8A 00 00 00            JMP 0x005cc139
LAB_005cc0af:
005CC0AF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC0B4  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CC0BA  83 F9 FF                  CMP ECX,-0x1
005CC0BD  74 22                     JZ 0x005cc0e1
005CC0BF  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005CC0C5  52                        PUSH EDX
005CC0C6  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005CC0CC  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005CC0D2  52                        PUSH EDX
005CC0D3  6A FE                     PUSH -0x2
005CC0D5  51                        PUSH ECX
005CC0D6  50                        PUSH EAX
005CC0D7  E8 F4 73 0E 00            CALL 0x006b34d0
005CC0DC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc0e1:
005CC0E1  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CC0E7  83 F9 FF                  CMP ECX,-0x1
005CC0EA  74 22                     JZ 0x005cc10e
005CC0EC  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005CC0F2  52                        PUSH EDX
005CC0F3  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005CC0F9  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005CC0FF  52                        PUSH EDX
005CC100  6A FE                     PUSH -0x2
005CC102  51                        PUSH ECX
005CC103  50                        PUSH EAX
005CC104  E8 C7 73 0E 00            CALL 0x006b34d0
005CC109  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc10e:
005CC10E  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005CC114  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC11A  51                        PUSH ECX
005CC11B  52                        PUSH EDX
005CC11C  E8 0F 73 0E 00            CALL 0x006b3430
005CC121  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC126  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC12C  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005CC132  51                        PUSH ECX
005CC133  52                        PUSH EDX
005CC134  E8 F7 72 0E 00            CALL 0x006b3430
LAB_005cc139:
005CC139  A1 3C 73 80 00            MOV EAX,[0x0080733c]
005CC13E  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CC144  50                        PUSH EAX
005CC145  51                        PUSH ECX
005CC146  E8 B5 A3 0E 00            CALL 0x006b6500
005CC14B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005CC14E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CC154  5F                        POP EDI
005CC155  5E                        POP ESI
005CC156  5B                        POP EBX
005CC157  8B E5                     MOV ESP,EBP
005CC159  5D                        POP EBP
005CC15A  C2 04 00                  RET 0x4
LAB_005cc15d:
005CC15D  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005CC160  68 80 D2 7C 00            PUSH 0x7cd280
005CC165  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CC16A  56                        PUSH ESI
005CC16B  57                        PUSH EDI
005CC16C  6A 4F                     PUSH 0x4f
005CC16E  68 58 D2 7C 00            PUSH 0x7cd258
005CC173  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CC178  E8 53 13 0E 00            CALL 0x006ad4d0
005CC17D  83 C4 18                  ADD ESP,0x18
005CC180  85 C0                     TEST EAX,EAX
005CC182  74 01                     JZ 0x005cc185
005CC184  CC                        INT3
LAB_005cc185:
005CC185  6A 4F                     PUSH 0x4f
005CC187  68 58 D2 7C 00            PUSH 0x7cd258
005CC18C  57                        PUSH EDI
005CC18D  56                        PUSH ESI
005CC18E  E8 AD 9C 0D 00            CALL 0x006a5e40
005CC193  5F                        POP EDI
005CC194  5E                        POP ESI
005CC195  5B                        POP EBX
005CC196  8B E5                     MOV ESP,EBP
005CC198  5D                        POP EBP
005CC199  C2 04 00                  RET 0x4
