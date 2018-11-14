#ifndef _MRF24J40_H
#define _MRF24J40_H

// Short address control register

/** Receive mac control register(RXMCR)
 * Address: 0x00
 */
#define MRF_RXMCR     (0x00)
// Automatic Acknowledgement Response bit
#define MRF_RXMCR_NOACKRSP (0x20)
// PAN Coordinator
#define MRF_RXMCR_PANCOORD (0x08)
// Coordinator bit
#define MRF_RXMCR_COORD    (0x04)
// Packet Error Mode bit
#define MRF_RXMCR_ERRPKT   (0x02)
// Promiscuous Mode bit
#define MRF_RXMCR_PROMI    (0x01)


/** PAN ID low byte register(PANIDL)
 * Address: 0x01
 */
#define MRF_PANIDL    (0x01)


/** PAN ID High byte register(PANIDH)
 * Address: 0x02
 */
#define MRF_PANIDH    (0x02)

/** Short address low byte register
 * Address: 0x03
 */
#define MRF_SADRL     (0x03)

/** Short address high byte register
 * Address: 0x04
 */
#define MRF_SADRH     (0x04)

/** Extended address 0 register(EADR0)
 * Address: 0x05
 */
#define MRF_EADR0     (0x05)

/** Extended address 1 register(EADR1)
 * Address: 0x06
 */
#define MRF_EADR1     (0x06)

/** Extended address 2 register(EADR2)
 * Address: 0x07
 */
#define MRF_EADR2     (0x07)

/** Extended address 3 register(EADR3)
 * Address: 0x08
 */
#define MRF_EADR3     (0x08)

/** Extended address 4 register(EADR4)
 * Address: 0x09
 */
#define MRF_EADR4     (0x09)

/** Extended address 5 register(EADR5)
 * Address: 0x0a
 */
#define MRF_EADR5     (0x0A)

/** Extended address 6 register(EADR6)
 * Address: 0x0b
 */
#define MRF_EADR6     (0x0B)

/** Extended address 7 register(EADR7)
 * Address: 0x0b
 */
#define MRF_EADR7     (0x0C)


/** Receive FIFO flush register(RXFLUSH)
 * Address: 0x0d
 */
#define MRF_RXFLUSH   (0x0D)
// Wake Signal Polarity bit
#define MRF_RXFLUSH_WAKEPOL  (0x40)
// Wake I/O pin Enable bit
#define MRF_RXFLUSH_WAKEPAD  (0x20)
// Command Frame Receive bit
#define MRF_RXFLUSH_CMDONLY  (0x08)
// Data Frame Receive bit
#define MRF_RXFLUSH_DATAONLY (0x04)
// Beacon Frame Receive bit
#define MRF_RXFLUSH_BCNONLY  (0x02)
// Reset Receive FIFO Address pointer bit
#define MRF_RXFLUSH_RXFLUSH  (0x01)


//#define MRF_reserved (0x0E)
//#define MRF_reserved (0x0F)


/** Beacon and Superframe order register(ORDER)
 * Address: 0x10
 */
#define MRF_ORDER     (0x10)
// Beacon order bits
#define MRF_ORDER_BO (0xf0)
// Superframe order bits
#define MRF_ORDER_SO (0x0f)


/** CSMA-CA mode control register(TXMCR)
 * Address: 0x11
 */
#define MRF_TXMCR     (0x11)
// No Carrier Sense Multiple Access(CSMA) Algorithm bits
#define MRF_TXMCR_NOCSMA    (0x80)
// Battery Life Extension Mode bit
#define MRF_TXMCR_BATLIFEXT (0x40)
// Slotted CSMA-CA Mode bit
#define MRF_TXMCR_SLOTTED   (0x20)
// MAC minumum Backoff Exponent bits
#define MRF_TXMCR_MACMINBE  (0x18)
// CSMA Backoff bits
#define MRF_TXMCR_CSMABF    (0x07)

/** MAC Ack time-out duration register(ACKTMOUT)
 * Address: 0x12
 */
#define MRF_ACKTMOUT  (0x12)
// Data Request Pending Acknowledgement bit
// Refer to IEEE 802.15.4™-2003 Standard,
// Section 5.4.2.2 “ Data Transfer from a Coordinator” and
// Section 7.3 “MAC Command Frames”.
#define MRF_ACKTMOUT_DRPACK (0x80)
// macAckWaitDuration bits
// Refer to IEEE 802.15.4(TM)-2003 Standard, Table 71: MAC PIB Attributes
#define MRF_ACKTMOUT_MAWD   (0x7f)


/** GTS1 and CAP end slot register
 * Address: 0x13
 */
#define MRF_ESLOTG1   (0x13)
// End Slot of 1st GTS bits
#define MRF_ESLOTG1_GTS1 (0xf0)
// Contention Access Period(CAP) End Slot bits
#define MRF_ESLOTG1_CAP  (0x0f)


/** Symbol period tick low byte register(SYMTICKL)
 * Address: 0x14
 */
#define MRF_SYMTICKL  (0x14)

/** Symbol period tick high byte register(SYMTICKH)
 * Address: 0x15
 */
#define MRF_SYMTICKH  (0x15)
// Transmitter Enable On Time Tick bits
#define MRF_SYMTICKH_TXONT  (0xfe)
// Symbol Period Tick bit
#define MRF_SYMTICKH_TICKP8 (0x01)


/** Power amplifier control 0 register
 * Address: 0x16
 */
#define MRF_PACON0    (0x16)
// Power Amplifier Enable On Time Tick bits
#define MRF_PACON0_PAONT (0xff)


/** Power amplifier control 1 register
 * Address: 0x17
 */
#define MRF_PACON1    (0x17)
// Power Aomlifier Enable On Time Symbol bits
#define MRF_PACON1_PAONTS (0x1e)
// Power Amplifier Enable On Time Tick bits
#define MRF_PACON1_PAONT8 (0x01)

/** Power amplifier control 2 register
 * Address: 0x18
 */
#define MRF_PACON2    (0x18)
// FIFO Enable bit
#define MRF_PACON2_FIFOEN (0x80)
// Transmitter Enable On Time Symbol bits
#define MRF_PACON2_TXONTS (0x3c)
// Transmitter Enable On Time Tick bits
#define MRF_PACON2_TXONT  (0x03)

//#define MRF_reserved (0x19)


/** Transmit beacon FIFO control 0 register
 * Address: 0x1a
 */
#define MRF_TXBCON0   (0x1A)
// TX Beacon FIFO Security Eanbled bit
#define MRF_TXBCON0_TXBSECEN (0x02)
// Transmit Frame in TX Beacon FIFO bit
#define MRF_TXBCON0_TXBTRIG  (0x01)

/** Transmit normal FIFO control register
 * Address: 0x1b
 */
#define MRF_TXNCON    (0x1B)
// Frame Pending Status bit
#define MRF_TXNCON_FPSTAT    (0x10)
// Activate Indirect Transmission bit
#define MRF_TXNCON_INDIRECT  (0x08)
// TX Normal FIEO Acknowledgement Request bit
#define MRF_TXNCON_TXNACKREQ (0x04)
// TX Normal FIFO Security Enabled bit
#define MRF_TXNCON_TXNSENCEN (0x02)
// Transmit Frame in TX Normal FIFO bit
#define MRF_TXNCON_TXNTRIG   (0x01)

/** GTS1 FIFO Control register
 * Address: 0x1c
 */
#define MRF_TXG1CON   (0x1C)
// TX GTS1 FIFO Retry Times bits
#define MRF_TXG1CON_TXG1RETRY  (0xc0)
// GTS Slot that TX GTS1 FIFO Occupies bits
#define MRF_TXG1CON_TXG1SLOT   (0x38)
// TX GTS1 FIFO Acknowledgement Request bit
#define MRF_TXG1CON_TXG1ACKREQ (0x04)
// TX GTS1 FIFO Security Enabled bit
#define MRF_TXG1CON_TX1SECEN   (0x02)
// Transmit Frame in TX GTS1 FIFO bit
#define MRF_TXG1CON_TXG1TRIG   (0x01)


/** GTS2 FIFO control register
 * Address: 0x1d
 */
#define MRF_TXG2CON   (0x1D)
// TX GTS2 FIFO Retry Times bit
#define MRF_TXG2CON_TXG2RETRY  (0xc0)
// GTS Slot that TX GTS2 FIFO Occupies bits
#define MRF_TXG2CON_TXG2SLOT   (0x38)
// TX GTS2 FIFO Acknowledgement Request bit
#define MRF_TXG2CON_TXG2ACKREQ (0x04)
// TX GTS2 FIFO Security Enabled bit
#define MRF_TXG2CON_TXG2SECEN  (0x02)
// Transmit Frame in TX GTS2 FIFO bit
#define MRF_TXG2CON_TXG2TRIG   (0x01)


/** End slot of GTS3 and GT2 register
 * Address: 0x1e
 */
#define MRF_ESLOTG23  (0x1E)
// End Slot of 3rd GTS bits
#define MRF_ESLOTG23_GT3 (0xf0)
// End Slot of 2nd GTS bits
#define MRF_ESLOTG23_GT2 (0x0f)

/** End slot of GTS5 and GTS4 register
 * Address: 0x1f
 */
#define MRF_ESLOTG45  (0x1F)
// End Slot of 5th GTS bits
#define MRF_ESLOTG45_GTS5 (0xf0)
// End Slot of 4th GTS bits
#define MRF_ESLOTG45_GTS4 (0x0f)

/** End slot of GTS6 register
 * Address: 0x20
 */
#define MRF_ESLOTG67  (0x20)
// End Slot of 6th GTS bits
#define MRF_ESLOTG67_GTS6 (0x0f)


/** TX Data pending register
 * Address: 0x21
 */
#define MRF_TXPEND    (0x21)
// Minumum Long Interframe Spacing bits
#define MRF_TXPEND_MLIFS     (0xfc)
// Continue TX GTS FIFO Switch in CFP bit
#define MRF_TXPEND_GTSSWITCH (0x02)
// Frame Pending bit in the Acknowledgement Frame bit
#define MRF_TXPEND_FPACK     (0x01)


/** Wake control register
 * Address: 0x22
 */
#define MRF_WAKECON   (0x22)
// Immediate Wake-up Mode Enable bit
#define MRF_WAKECON_IMMWAKE (0x80)
// Register Wake-up Signal bit
#define MRF_WAKECON_REGWAKE (0x40)
// Interval to Start Beacon
#define MRF_WAKECON_INTL    (0x3f)


/** Superframe conter offset to align beacon register
 * Address: 0x23
 */
#define MRF_FRMOFFSET (0x23)
// Superframe Conter Offset for Align Air Slot Boundary bits
#define MRF_FRMOFFSET_OFFSET (0xff)


/** TX MAC status register
 * Address: 0x24
 */
#define MRF_TXSTAT    (0x24)
// TX Normal FIFO Retry Times bits
#define MRF_TXSTAT_TXNRETRY (0xc0)
// Clear Channel Assessment(CCA) Status of Last Transmission bit
#define MRF_TXSTAT_CCAFAIL  (0x20)
// TX GTS2 FIFO Transmission failed due to not enough time before the end of GTS bit
#define MRF_TXSTAT_TXG2FNT  (0x10)
// TX GTS1 FIFO Transmission failed due to not enough time before the end of GTS bit
#define MRF_TXSTAT_TXG1FNT  (0x08)
// TX GTS2 FIFO Release Status bit
#define MRF_TXSTAT_TXG2STAT (0x04)
// TX GTS1 FIFO Release Status bit
#define MRF_TXSTAT_TXG1STAT (0x02)
// TX Normal FIFO Release Status bit
#define MRF_TXSTAT_TXNSTAT  (0x01)


/** Transmit Beacon control 1 register
 * Address: 0x25
 */
#define MRF_TXBCON1   (0x25)
// TX Beacon FIFO interrupt mask bit
#define MRF_TXBCON1_TXBMSK  (0x80)
// Wake-up/Beacon Interrupt Status bit
#define MRF_TXBCON1_WU_BCN  (0x40)
// RSSI Average Symbols bits
#define MRF_TXBCON1_RSSINUM (0x30)


/** Gated clock control register
 * Address: 0x26
 */
#define MRF_GATECLK   (0x26)
// GTS FIFO Clock Enable bit
#define MRF_GATECLK_GTSON (0x80)


/** TX Turnaround time register
 * Address: 0x27
 */
#define MRF_TXTIME    (0x27)
// Turnaround Time bits
#define MRF_TXTIME_TURNTIME (0xf0)

/** Half Symbol timer low byte register
 * Address: 0x28
 */
#define MRF_HSYMTMRL  (0x28)

/** Half symbol timer high byte register
 * Address: 0x29
 */
#define MRF_HSYMTMRH  (0x29)


/** Software reset register
 * Address: 0x2a
 */
#define MRF_SOFTRST   (0x2A)
// Power Management Reset bit
#define MRF_SOFTRST_RSTPWR (0x04)
// Baseband Reset bit
#define MRF_SOFTRST_RSTBB  (0x02)
// MAC Reset bit
#define MRF_SOFTRST_RSTMAC (0x01)

//#define MRF_reserved (0x2B)

/** Security Control 0 register
 * Address: 0x2c
 */
#define MRF_SECCON0   (0x2C)
// RX Security Decryption Ingore bit
#define MRF_SECCON0_SECIGNORE (0x80)
// RX Security Descryption Start bit
#define MRF_SECCON0_SECSTART  (0x40)
// RX FIFO Security Suite Select bits
#define MRF_SECCON0_RXCIPHER  (0x38)
// TX Normal FIFO Security Suite Select bits
#define MRF_SECCON0_TXNCIPHER (0x07)


/** Security control 1 register(SECCON1)
 */
#define MRF_SECCON1   (0x2D)
// TX Beacon FIFO Security Suite Select bits
#define MRF_SECCON1_TXBCIPHER (0x70)
// Disable Decryption Function bit
#define MRF_SECCON1_DISDEC    (0x02)
// Disable Encryption Function bit
#define MRF_SECCON1_DISENC    (0x01)


/** TX Stabilization register
 * Address: 0x2e
 */
#define MRF_TXSTBL    (0x2E)
// VCO Stabilization Period bits
#define MRF_TXSTBL_RFSTBL (0xf0)
// Minumum Short Interframe Spacing bits
#define MRF_TXSTBL_MSIFS  (0x0f)

//#define MRF_reserved (0x2F)


/** RX MAC Status register
 * Address: 0x30
 */
#define MRF_RXSR      (0x30)
// MIC Error in Upper Layer Security Mode bit
#define MRF_RXSR_UPSECERR  (0x40)
// Battery Low-Voltage Indicator bit
#define MRF_RXSR_BATIND    (0x20)
// Security Decryption Error
#define MRF_RXSR_SECDECERR (0x04)


/** Interrupt status register
 * Address: 0x31
 */
#define MRF_INTSTAT   (0x31)
// Sleep Alert Interrupt bit
#define MRF_INTSTAT_SLPIF     (0x80)
// Wake-up Alert Interrupt bit
#define MRF_INTSTAT_WAKEIF    (0x40)
// Half Symbol Timer Interrupt bit
#define MRF_INTSTAT_HSYMTMRIF (0x20)
// Security Key Request Interrupt bit
#define MRF_INTSTAT_SECIF     (0x10)
// RX FIFO Reception Interrupt bit
#define MRF_INTSTAT_RXIF      (0x08)
// TX GTS2 FIFO Transmission Interrupt bit
#define MRF_INTSTAT_TXG2IF    (0x04)
// TX GTS1 FIFO Transmission Interrupt bit
#define MRF_INTSTAT_TXG1IF    (0x02)
// TX Normal FIFO Release Interrupt bit
#define MRF_INTSTAT_TXNIF     (0x01)


/** Interrupt control register
 * Address: 0x32
 */
#define MRF_INTCON    (0x32)
// Sleep Alert Interrupt Eanble bit
#define MRF_INTCON_SLPIE     (0x80)
// Wake-up Alert Interrupt Enable bit
#define MRF_INTCON_WAKEIE    (0x40)
// Half Symbol Timer Interrupt Enable bit
#define MRF_INTCON_HSYMTMRIE (0x20)
// Security Key Request Interrupt Enable bit
#define MRF_INTCON_SECIE     (0x10)
// RX FIFO Reception Interrupt Enable bit
#define MRF_INTCON_RXIE      (0x08)
// TX GTS2 FIFO Transmission Interrupt Eanble bit
#define MRF_INTCON_TXG2IE    (0x04)
// TX GTS1 FIFO Transmission Interrupt Eanble bit
#define MRF_INTCON_TXG1IE    (0x02)
// TX Normal FIFO Transmission Interrupt Enable bit
#define MRF_INTCON_TXNIE     (0x01)


/** GPIO Port Register(GPIO)
 * Address: 0x33
 */
#define MRF_GPIO      (0x33)
// General Purpose I/O GPIO5 bit
#define MRF_GPIO_GPI5 (0x20)
// General Purpose I/O GPIO4 bit
#define MRF_GPIO_GPI4 (0x10)
// General Purpose I/O GPIO3 bit
#define MRF_GPIO_GPI3 (0x08)
// General Purpose I/O GPIO2 bit
#define MRF_GPIO_GPI2 (0x04)
// General Purpose I/O GPIO1 bit
#define MRF_GPIO_GPI1 (0x02)
// General Purpose I/O GPIO0 bit
#define MRF_GPIO_GPIO (0x01)


/** GPIO PIN Direction register(TRISGPIO)
 * Address: 0x34
 */
#define MRF_TRISGPIO  (0x34)
// General Purpose I/O GPIO5 Direction bit
#define MRF_TRISGPIO_TRISGP5 (0x20)
// General Purpose I/O GPIO4 Direction bit
#define MRF_TRISGPIO_TRISGP4 (0x10)
// General Purpose I/O GPIO3 Direction bit
#define MRF_TRISGPIO_TRISGP3 (0x08)
// General Purpose I/O GPIO2 Direction bit
#define MRF_TRISGPIO_TRISGP2 (0x04)
// General Purpose I/O GPIO1 Direction bit
#define MRF_TRISGPIO_TRISGP1 (0x02)
// General Purpose I/O GPIO0 Direction bit
#define MRF_TRISGPIO_TRISGP0 (0x01)


/** Sleep Acknowledgement and Wake-up counter register(SLPACK)
 * Address: 0x35
 */
#define MRF_SLPACK    (0x35)
// Sleep Acknowledge bit
#define MRF_SLPACK_SLPACK  (0x80)
// Wake Count bit
#define MRF_SLPACK_WAKECNT (0x7f)


/** RF mode control register(RFCTL)
 * Address: 0x36
 */
#define MRF_RFCTL     (0x36)
// Wake Count bit
#define MRF_RFCTL_WAKECNT  (0x18)
// RF State Machine Reset bit
#define MRF_RFCTL_RFRST    (0x04)
// Forces RF Control State Machine to transmit State
#define MRF_RFCTL_RFTXMODE (0x02)
// Forces RF Control State Machine to receive State
#define MRF_RFCTL_RFRXMODE (0x01)


/** Security Control 2 register(SECCR2)
 * Address: 0x37
 */
#define MRF_SECCR2    (0x37)
// Upper Layer Security Decryption Mode bit
#define MRF_SECCR2_UPDEC      (0x80)
// Upper Layer Security Encryption Mode bit
#define MRF_SECCR2_UPENC      (0x40)
// TX GTS2 FIFO Security Suite Select bits
#define MRF_SECCR2_TXG2CIPHER (0x38)
// TX GTS1 FIFO Security Suite Select bits
#define MRF_SECCR2_TXG1CIPHER (0x07)

/** Baseband 0 regsiter(BBREG0)
 * Address: 0x38
 */
#define MRF_BBREG0    (0x38)
// Turbo Mode Enable bit
#define MRF_BBREG0_TURBO (0x01)

/** Baseband 1 register(BBREG1)
 * Address: 0x39
 */
#define MRF_BBREG1    (0x39)
// RX Decode Inversion bit
#define MRF_BBREG1_RXDECINV (0x04)

/** Baseband 2 register(BBREG2)
 * Address: 0x3a)
 */
#define MRF_BBREG2    (0x3A)
// Clear Channel Assessment(CCA) Mode bits
#define MRF_BBREG2_CCAMODE (0xc0)
// Clear Channel Assessment(CCA) Carrier Sense(CS) Threshold bits
#define MRF_BBREG2_CCACSTH (0x3c)


/** Baseband 3 register(BBREG3)
 * Address: 0x3b
 */
#define MRF_BBREG3    (0x3B)
// Preamble Search Energy Valid Threshold bit
#define MRF_BBREG3_PREVALIDTH (0xf0)
// Preamble Search Energy Detection Threshold bit
#define MRF_BBREG3_PREDETTH   (0x0e)


/** Baseband 4 register(BBREG4)
 * Address: 0x3c
 */
#define MRF_BBREG4    (0x3C)
// Carrier Sense Threshold bits
#define MRF_BBREG4_CSTH   (0xe0)
// Preamble Counter Threshold bits
#define MRF_BBREG4_PRECNT (0x1c)

//#define MRF_reserved (0x3D)


/** Baseband 6 register(BBREG6)
 * Address: 0x3e
 */
#define MRF_BBREG6    (0x3E)
// RSSI Mode 1 bit
#define MRF_BBREG6_RSSIMODE1 (0x80)
// RSSI Mode 2 bit
#define MRF_BBREG6_RSSIMODE2 (0x40)
// RSSI Ready Signal for RSSIMODE 1 bit
#define MRF_BBREG6_RSSIRDY   (0x01)


/** Energy Detection Threshold for CCA register(CCAEDTH)
 * Address: 0x3f
 */
#define MRF_CCAEDTH   (0x3F)


// Long address control register
#define MRF_RFCON0  (0x200)
#define MRF_RFCON1  (0x201)
#define MRF_RFCON2  (0x202)
#define MRF_RFCON3  (0x203)
//#define MRF_reserved (0x204)
#define MRF_RFCON5  (0x205)
#define MRF_RFCON6  (0x206)
#define MRF_RFCON7  (0x207)
#define MRF_RFCON8  (0x208)
#define MRF_SLPCAL0 (0x209)
#define MRF_SLPCAL1 (0x20A)
#define MRF_SLPCAL2 (0x20B)
//#define MRF_reserved (0x20C)
//#define MRF_reserved (0x20D)
//#define MRF_reserved (0x20E)
#define MRF_RFSTATE (0x20F)
#define MRF_RSSI    (0x210)
#define MRF_SLPCON0 (0x211)
//#define MRF_reserved (0x212)
//#define MRF_reserved (0x213)
//#define MRF_reserved (0x214)
//#define MRF_reserved (0x215)
//#define MRF_reserved (0x216)
//#define MRF_reserved (0x217)
//#define MRF_reserved (0x218)
//#define MRF_reserved (0x219)
//#define MRF_reserved (0x21A)
//#define MRF_reserved (0x21B)
//#define MRF_reserved (0x21C)
//#define MRF_reserved (0x21D)
//#define MRF_reserved (0x21E)
//#define MRF_reserved (0x21F)
#define MRF_SLPCON1   (0x220)
//#define MRF_reserved (0x221)
#define MRF_WAKETIMEL (0x222)
#define MRF_WAKETIMEH (0x223)
#define MRF_REMCNTL   (0x224)
#define MRF_REMCNTH   (0x225)
#define MRF_MAINCNT0  (0x226)
#define MRF_MAINCNT1  (0x227)
#define MRF_MAINCNT2  (0x228)
#define MRF_MAINCNT3  (0x229)
//#define MRF_reserved (0x22A)
//#define MRF_reserved (0x22B)
//#define MRF_reserved (0x22C)
//#define MRF_reserved (0x22D)
//#define MRF_reserved (0x22E)
#define MRF_TESTMODE  (0x22F)
#define MRF_ASSOEADR0 (0x230)
#define MRF_ASSOEADR1 (0x231)
#define MRF_ASSOEADR2 (0x232)
#define MRF_ASSOEADR3 (0x233)
#define MRF_ASSOEADR4 (0x234)
#define MRF_ASSOEADR5 (0x235)
#define MRF_ASSOEADR6 (0x236)
#define MRF_ASSOEADR7 (0x237)
#define MRF_ASSOSADR0 (0x238)
#define MRF_ASSOSADR1 (0x239)
//#define MRF_reserved (0x23A)
//#define MRF_reserved (0x23B)
//#define MRF_unimplemented (0x23C)
//#define MRF_unimplemented (0x23D)
//#define MRF_unimplemented (0x23E)
//#define MRF_unimplemented (0x23F)
#define MRF_UPNONCE0  (0x240)
#define MRF_UPNONCE1  (0x241)
#define MRF_UPNONCE2  (0x242)
#define MRF_UPNONCE3  (0x243)
#define MRF_UPNONCE4  (0x244)
#define MRF_UPNONCE5  (0x245)
#define MRF_UPNONCE6  (0x246)
#define MRF_UPNONCE7  (0x247)
#define MRF_UPNONCE8  (0x248)
#define MRF_UPNONCE9  (0x249)
#define MRF_UPNONCE10 (0x24A)
#define MRF_UPNONCE11 (0x24B)
#define MRF_UPNONCE12 (0x24C)

#endif
