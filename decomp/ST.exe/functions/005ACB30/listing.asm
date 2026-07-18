ChooseMapTy::DoneChooseMap:
005ACB30  55                        PUSH EBP
005ACB31  8B EC                     MOV EBP,ESP
005ACB33  83 EC 48                  SUB ESP,0x48
005ACB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005ACB3B  53                        PUSH EBX
005ACB3C  56                        PUSH ESI
005ACB3D  57                        PUSH EDI
005ACB3E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005ACB41  33 FF                     XOR EDI,EDI
005ACB43  8D 55 BC                  LEA EDX,[EBP + -0x44]
005ACB46  8D 4D B8                  LEA ECX,[EBP + -0x48]
005ACB49  57                        PUSH EDI
005ACB4A  52                        PUSH EDX
005ACB4B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005ACB4E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005ACB54  E8 97 0C 18 00            CALL 0x0072d7f0
005ACB59  8B F0                     MOV ESI,EAX
005ACB5B  83 C4 08                  ADD ESP,0x8
005ACB5E  3B F7                     CMP ESI,EDI
005ACB60  0F 85 8B 03 00 00         JNZ 0x005acef1
005ACB66  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005ACB69  8B CE                     MOV ECX,ESI
005ACB6B  E8 1E 7A E5 FF            CALL 0x0040458e
005ACB70  81 7E 4D 21 61 00 00      CMP dword ptr [ESI + 0x4d],0x6121
005ACB77  74 2F                     JZ 0x005acba8
005ACB79  A1 64 17 81 00            MOV EAX,[0x00811764]
005ACB7E  3B C7                     CMP EAX,EDI
005ACB80  74 26                     JZ 0x005acba8
005ACB82  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
005ACB88  84 C9                     TEST CL,CL
005ACB8A  74 1C                     JZ 0x005acba8
005ACB8C  6A FF                     PUSH -0x1
005ACB8E  57                        PUSH EDI
005ACB8F  57                        PUSH EDI
005ACB90  57                        PUSH EDI
005ACB91  6A 10                     PUSH 0x10
005ACB93  57                        PUSH EDI
005ACB94  50                        PUSH EAX
005ACB95  E8 C6 87 16 00            CALL 0x00715360
005ACB9A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005ACBA0  83 C4 1C                  ADD ESP,0x1c
005ACBA3  E8 DB 7F E5 FF            CALL 0x00404b83
LAB_005acba8:
005ACBA8  8B 86 8F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8f]
005ACBAE  3B C7                     CMP EAX,EDI
005ACBB0  74 0D                     JZ 0x005acbbf
005ACBB2  50                        PUSH EAX
005ACBB3  FF 15 AC BC 85 00         CALL dword ptr [0x0085bcac]
005ACBB9  89 BE 8F 1C 00 00         MOV dword ptr [ESI + 0x1c8f],EDI
LAB_005acbbf:
005ACBBF  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005ACBC4  3B C7                     CMP EAX,EDI
005ACBC6  74 28                     JZ 0x005acbf0
005ACBC8  39 B8 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EDI
005ACBCE  74 14                     JZ 0x005acbe4
005ACBD0  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005ACBD3  83 F9 FF                  CMP ECX,-0x1
005ACBD6  74 18                     JZ 0x005acbf0
005ACBD8  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005ACBDB  51                        PUSH ECX
005ACBDC  50                        PUSH EAX
005ACBDD  E8 0E 6F 10 00            CALL 0x006b3af0
005ACBE2  EB 0C                     JMP 0x005acbf0
LAB_005acbe4:
005ACBE4  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005ACBEA  51                        PUSH ECX
005ACBEB  E8 20 BF 10 00            CALL 0x006b8b10
LAB_005acbf0:
005ACBF0  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005ACBF3  3D 20 61 00 00            CMP EAX,0x6120
005ACBF8  74 21                     JZ 0x005acc1b
005ACBFA  3D 21 61 00 00            CMP EAX,0x6121
005ACBFF  74 1A                     JZ 0x005acc1b
005ACC01  3D 05 61 00 00            CMP EAX,0x6105
005ACC06  74 13                     JZ 0x005acc1b
005ACC08  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005ACC0E  6A 02                     PUSH 0x2
005ACC10  6A 0A                     PUSH 0xa
005ACC12  52                        PUSH EDX
005ACC13  E8 2B 51 E5 FF            CALL 0x00401d43
005ACC18  83 C4 0C                  ADD ESP,0xc
LAB_005acc1b:
005ACC1B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ACC20  83 C0 2C                  ADD EAX,0x2c
005ACC23  39 38                     CMP dword ptr [EAX],EDI
005ACC25  74 0C                     JZ 0x005acc33
005ACC27  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005ACC2D  50                        PUSH EAX
005ACC2E  E8 AD 54 14 00            CALL 0x006f20e0
LAB_005acc33:
005ACC33  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005ACC39  3B CF                     CMP ECX,EDI
005ACC3B  74 1A                     JZ 0x005acc57
005ACC3D  E8 48 46 E5 FF            CALL 0x0040128a
005ACC42  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005ACC48  51                        PUSH ECX
005ACC49  E8 62 16 18 00            CALL 0x0072e2b0
005ACC4E  83 C4 04                  ADD ESP,0x4
005ACC51  89 BE B8 20 00 00         MOV dword ptr [ESI + 0x20b8],EDI
LAB_005acc57:
005ACC57  8D 8E 70 1A 00 00         LEA ECX,[ESI + 0x1a70]
005ACC5D  E8 4E 8E 16 00            CALL 0x00715ab0
005ACC62  8D 8E 01 1B 00 00         LEA ECX,[ESI + 0x1b01]
005ACC68  E8 43 8E 16 00            CALL 0x00715ab0
005ACC6D  8D 8E 92 1B 00 00         LEA ECX,[ESI + 0x1b92]
005ACC73  E8 38 8E 16 00            CALL 0x00715ab0
005ACC78  8D BE 23 1C 00 00         LEA EDI,[ESI + 0x1c23]
005ACC7E  BB 16 00 00 00            MOV EBX,0x16
LAB_005acc83:
005ACC83  8B 07                     MOV EAX,dword ptr [EDI]
005ACC85  83 F8 FF                  CMP EAX,-0x1
005ACC88  74 13                     JZ 0x005acc9d
005ACC8A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ACC90  50                        PUSH EAX
005ACC91  52                        PUSH EDX
005ACC92  E8 19 6F 10 00            CALL 0x006b3bb0
005ACC97  C7 07 FF FF FF FF         MOV dword ptr [EDI],0xffffffff
LAB_005acc9d:
005ACC9D  83 C7 04                  ADD EDI,0x4
005ACCA0  4B                        DEC EBX
005ACCA1  75 E0                     JNZ 0x005acc83
005ACCA3  8B 86 87 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c87]
005ACCA9  83 F8 FF                  CMP EAX,-0x1
005ACCAC  74 0C                     JZ 0x005accba
005ACCAE  50                        PUSH EAX
005ACCAF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005ACCB4  50                        PUSH EAX
005ACCB5  E8 F6 6E 10 00            CALL 0x006b3bb0
LAB_005accba:
005ACCBA  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005ACCC0  33 FF                     XOR EDI,EDI
005ACCC2  3B CF                     CMP ECX,EDI
005ACCC4  C7 86 87 1C 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1c87],0xffffffff
005ACCCE  74 1A                     JZ 0x005accea
005ACCD0  E8 B5 45 E5 FF            CALL 0x0040128a
005ACCD5  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005ACCDB  51                        PUSH ECX
005ACCDC  E8 CF 15 18 00            CALL 0x0072e2b0
005ACCE1  83 C4 04                  ADD ESP,0x4
005ACCE4  89 BE BC 20 00 00         MOV dword ptr [ESI + 0x20bc],EDI
LAB_005accea:
005ACCEA  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005ACCF0  84 C0                     TEST AL,AL
005ACCF2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ACCF7  74 73                     JZ 0x005acd6c
005ACCF9  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005ACCFF  83 F9 FF                  CMP ECX,-0x1
005ACD02  74 12                     JZ 0x005acd16
005ACD04  8B 90 D5 03 00 00         MOV EDX,dword ptr [EAX + 0x3d5]
005ACD0A  51                        PUSH ECX
005ACD0B  52                        PUSH EDX
005ACD0C  E8 DF 6D 10 00            CALL 0x006b3af0
005ACD11  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acd16:
005ACD16  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005ACD1C  83 F9 FF                  CMP ECX,-0x1
005ACD1F  74 12                     JZ 0x005acd33
005ACD21  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005ACD27  51                        PUSH ECX
005ACD28  50                        PUSH EAX
005ACD29  E8 C2 6D 10 00            CALL 0x006b3af0
005ACD2E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acd33:
005ACD33  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005ACD39  83 F9 FF                  CMP ECX,-0x1
005ACD3C  74 12                     JZ 0x005acd50
005ACD3E  51                        PUSH ECX
005ACD3F  8B 88 F7 04 00 00         MOV ECX,dword ptr [EAX + 0x4f7]
005ACD45  51                        PUSH ECX
005ACD46  E8 A5 6D 10 00            CALL 0x006b3af0
005ACD4B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acd50:
005ACD50  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005ACD56  3B CF                     CMP ECX,EDI
005ACD58  7C 12                     JL 0x005acd6c
005ACD5A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ACD60  51                        PUSH ECX
005ACD61  52                        PUSH EDX
005ACD62  E8 89 6D 10 00            CALL 0x006b3af0
005ACD67  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acd6c:
005ACD6C  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005ACD72  3B CF                     CMP ECX,EDI
005ACD74  74 1F                     JZ 0x005acd95
005ACD76  E8 0F 45 E5 FF            CALL 0x0040128a
005ACD7B  8B 86 C0 20 00 00         MOV EAX,dword ptr [ESI + 0x20c0]
005ACD81  50                        PUSH EAX
005ACD82  E8 29 15 18 00            CALL 0x0072e2b0
005ACD87  89 BE C0 20 00 00         MOV dword ptr [ESI + 0x20c0],EDI
005ACD8D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ACD92  83 C4 04                  ADD ESP,0x4
LAB_005acd95:
005ACD95  8A 8E B7 20 00 00         MOV CL,byte ptr [ESI + 0x20b7]
005ACD9B  84 C9                     TEST CL,CL
005ACD9D  0F 84 86 00 00 00         JZ 0x005ace29
005ACDA3  8A 8E 5F 1A 00 00         MOV CL,byte ptr [ESI + 0x1a5f]
005ACDA9  80 F9 0C                  CMP CL,0xc
005ACDAC  74 0F                     JZ 0x005acdbd
005ACDAE  80 F9 04                  CMP CL,0x4
005ACDB1  74 0A                     JZ 0x005acdbd
005ACDB3  80 F9 05                  CMP CL,0x5
005ACDB6  74 05                     JZ 0x005acdbd
005ACDB8  80 F9 13                  CMP CL,0x13
005ACDBB  75 6C                     JNZ 0x005ace29
LAB_005acdbd:
005ACDBD  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005ACDC3  83 F9 FF                  CMP ECX,-0x1
005ACDC6  74 12                     JZ 0x005acdda
005ACDC8  51                        PUSH ECX
005ACDC9  8B 88 A4 05 00 00         MOV ECX,dword ptr [EAX + 0x5a4]
005ACDCF  51                        PUSH ECX
005ACDD0  E8 1B 6D 10 00            CALL 0x006b3af0
005ACDD5  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acdda:
005ACDDA  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005ACDE0  83 F9 FF                  CMP ECX,-0x1
005ACDE3  74 12                     JZ 0x005acdf7
005ACDE5  8B 90 35 06 00 00         MOV EDX,dword ptr [EAX + 0x635]
005ACDEB  51                        PUSH ECX
005ACDEC  52                        PUSH EDX
005ACDED  E8 FE 6C 10 00            CALL 0x006b3af0
005ACDF2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005acdf7:
005ACDF7  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005ACDFD  3B CF                     CMP ECX,EDI
005ACDFF  7C 11                     JL 0x005ace12
005ACE01  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005ACE06  51                        PUSH ECX
005ACE07  50                        PUSH EAX
005ACE08  E8 E3 6C 10 00            CALL 0x006b3af0
005ACE0D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ace12:
005ACE12  8B 80 54 05 00 00         MOV EAX,dword ptr [EAX + 0x554]
005ACE18  3B C7                     CMP EAX,EDI
005ACE1A  7C 0D                     JL 0x005ace29
005ACE1C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ACE22  50                        PUSH EAX
005ACE23  51                        PUSH ECX
005ACE24  E8 C7 6C 10 00            CALL 0x006b3af0
LAB_005ace29:
005ACE29  8B 8E 7B 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c7b]
005ACE2F  8D 86 7B 1C 00 00         LEA EAX,[ESI + 0x1c7b]
005ACE35  3B CF                     CMP ECX,EDI
005ACE37  74 06                     JZ 0x005ace3f
005ACE39  50                        PUSH EAX
005ACE3A  E8 21 E2 0F 00            CALL 0x006ab060
LAB_005ace3f:
005ACE3F  8B 8E 8B 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c8b]
005ACE45  8D 86 8B 1C 00 00         LEA EAX,[ESI + 0x1c8b]
005ACE4B  3B CF                     CMP ECX,EDI
005ACE4D  89 BE 7F 1C 00 00         MOV dword ptr [ESI + 0x1c7f],EDI
005ACE53  74 06                     JZ 0x005ace5b
005ACE55  50                        PUSH EAX
005ACE56  E8 05 E2 0F 00            CALL 0x006ab060
LAB_005ace5b:
005ACE5B  8A 86 B6 20 00 00         MOV AL,byte ptr [ESI + 0x20b6]
005ACE61  84 C0                     TEST AL,AL
005ACE63  74 27                     JZ 0x005ace8c
005ACE65  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005ACE6B  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005ACE71  3B CF                     CMP ECX,EDI
005ACE73  74 17                     JZ 0x005ace8c
005ACE75  E8 B4 77 E5 FF            CALL 0x0040462e
005ACE7A  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005ACE80  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005ACE86  89 B9 AB 1C 00 00         MOV dword ptr [ECX + 0x1cab],EDI
LAB_005ace8c:
005ACE8C  8B 86 97 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c97]
005ACE92  3B C7                     CMP EAX,EDI
005ACE94  74 0C                     JZ 0x005acea2
005ACE96  50                        PUSH EAX
005ACE97  E8 D4 86 10 00            CALL 0x006b5570
005ACE9C  89 BE 97 1C 00 00         MOV dword ptr [ESI + 0x1c97],EDI
LAB_005acea2:
005ACEA2  8B 86 9B 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9b]
005ACEA8  3B C7                     CMP EAX,EDI
005ACEAA  74 0C                     JZ 0x005aceb8
005ACEAC  50                        PUSH EAX
005ACEAD  E8 5E 12 10 00            CALL 0x006ae110
005ACEB2  89 BE 9B 1C 00 00         MOV dword ptr [ESI + 0x1c9b],EDI
LAB_005aceb8:
005ACEB8  8B 86 9F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9f]
005ACEBE  3B C7                     CMP EAX,EDI
005ACEC0  74 0C                     JZ 0x005acece
005ACEC2  50                        PUSH EAX
005ACEC3  E8 A8 86 10 00            CALL 0x006b5570
005ACEC8  89 BE 9F 1C 00 00         MOV dword ptr [ESI + 0x1c9f],EDI
LAB_005acece:
005ACECE  39 7E 4D                  CMP dword ptr [ESI + 0x4d],EDI
005ACED1  74 0E                     JZ 0x005acee1
005ACED3  83 C6 3D                  ADD ESI,0x3d
005ACED6  B9 20 76 80 00            MOV ECX,0x807620
005ACEDB  56                        PUSH ESI
005ACEDC  E8 6F 6C 13 00            CALL 0x006e3b50
LAB_005acee1:
005ACEE1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005ACEE4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005ACEEA  5F                        POP EDI
005ACEEB  5E                        POP ESI
005ACEEC  5B                        POP EBX
005ACEED  8B E5                     MOV ESP,EBP
005ACEEF  5D                        POP EBP
005ACEF0  C3                        RET
LAB_005acef1:
005ACEF1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005ACEF4  68 AC C7 7C 00            PUSH 0x7cc7ac
005ACEF9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005ACEFE  56                        PUSH ESI
005ACEFF  57                        PUSH EDI
005ACF00  68 91 01 00 00            PUSH 0x191
005ACF05  68 28 C7 7C 00            PUSH 0x7cc728
005ACF0A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005ACF0F  E8 BC 05 10 00            CALL 0x006ad4d0
005ACF14  83 C4 18                  ADD ESP,0x18
005ACF17  85 C0                     TEST EAX,EAX
005ACF19  74 01                     JZ 0x005acf1c
005ACF1B  CC                        INT3
LAB_005acf1c:
005ACF1C  68 91 01 00 00            PUSH 0x191
005ACF21  68 28 C7 7C 00            PUSH 0x7cc728
005ACF26  57                        PUSH EDI
005ACF27  56                        PUSH ESI
005ACF28  E8 13 8F 0F 00            CALL 0x006a5e40
005ACF2D  5F                        POP EDI
005ACF2E  5E                        POP ESI
005ACF2F  5B                        POP EBX
005ACF30  8B E5                     MOV ESP,EBP
005ACF32  5D                        POP EBP
005ACF33  C3                        RET
